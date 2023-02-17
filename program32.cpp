#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int hieght(struct node*root);
bool solve(struct node *root,int min,int max)
{
    if(root->data>min&&root->data<min)
    {
    bool left=solve(root->left,min,root->data);
    bool right=solve(root->right,root->data,max);
    return left&&right;
    }
    else
    {
        return false;
    }
}
 bool isbst(struct node *root)
 {
    return solve(root,INT_MIN,INT_MAX);
 }
struct node *createnode(int d)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->data=d;
    newnode->right=NULL;
    return newnode;
}
void insertnode(struct node**root,int d)
{
    if((*root)==NULL)
    {
        *root=createnode(d);
    }
    else if(d<(*root)->data)
    {
        insertnode(&(*root)->left,d);
    }
    else if (d >( *root)->data)
    {
        insertnode(&(*root)->right, d);
    }
}
void show(struct node *root)
{
    int h =hieght(root);
    for (int  i = 0; i < h; i++)
    {
        
    }
    
}