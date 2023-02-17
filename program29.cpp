#include <stdio.h>
#include <stdlib.h>
struct node *inorderSuccessor(struct node *root) ;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int isThreaded;
};

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    temp->isThreaded = 0;
    return temp;
}

void inOrder(struct node *root)
{
    struct node *curr = root;
    while (curr != NULL)
    {
        while (!curr->isThreaded)
            curr = curr->left;
        printf("%d ", curr->data);
        curr = curr->right;
    }
}

struct node *insertk(struct node *root, int data)
{
    if (root == NULL)
        return newNode(data);
    if (data < root->data)
    {
        root->left = insertk(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertk(root->right, data);
    }
    return root;
}

void createThreaded(struct node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        createThreaded(root->left);
    if (root->left == NULL && root->right != NULL)
        root->left = root->right;
    else if (root->left != NULL && root->right == NULL)
    {
        root->isThreaded = 1;
        root->right = inorderSuccessor(root);
    }
    if (root->right != NULL)
        createThreaded(root->right);
}

struct node *inorderSuccessor(struct node *root)
{
    struct node *temp = root->right;
    while (temp->left != NULL)
        temp = temp->left;
    return temp;
}

int main()
{
    struct node *root = NULL;
    root = insertk(root, 7);
    root = insertk(root, 4);
    root = insertk(root, 9);
    root = insertk(root, 1);
    root = insertk(root, 6);
    root = insertk(root, 8);
    root = insertk(root, 10);
    createThreaded(root);
    inOrder(root);
}