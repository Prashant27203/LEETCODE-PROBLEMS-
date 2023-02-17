#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *right;
    int data;
    struct node *left;
};
struct node *createnode(int d)
{
    struct node *newnode=(struct node *)malloc(sizeof (struct node));
    newnode->left=NULL;
    newnode->data=d;
    newnode->right=NULL;
    return newnode;
}
void insertnode(struct node **root,int k)
{
    if(*root==NULL)
    {
        *root=createnode(k);
    }
    else if(k<(*root)->data)
    {
        insertnode((&(*root)->left),k);
    }
    else
    {
        insertnode((&(*root)->right), k);
    }
}

    int countLeafNodes(struct node * root)
    {
        if (root == NULL)
        {
            return 0;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        return countLeafNodes(root->left) + countLeafNodes(root->right);

    }
    void deletenode(struct node **root ,int key )
    {
        if((*root)==NULL)
    {
        return ;
    }
    else
    {

    }

            int main()
            {
                struct node *root = NULL;
                insertnode(&root, 25);
                insertnode(&root, 35);
                insertnode(&root, 15);
                insertnode(&root, 45);
                insertnode(&root, 10);
                insertnode(&root, 5);
                insertnode(&root, 50);
                insertnode(&root, 65);
                printf("\n");
                printf("The hieght of the tree is = \n%d\n", countLeafNodes(root));
                insertnode(&root, 58);
                insertnode(&root, 88);
                insertnode(&root, -1);
                insertnode(&root, 95);
                printf("The hieght of the tree is = \n%d\n", countLeafNodes(root));
                return 0;
            }