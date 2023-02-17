#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node 
{
    int data ;
    struct node *next ;

};
void createlist (struct node **node,int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode ->next =NULL;
    struct node *temp=*node;
    if(*node==NULL)
    {
        *node =newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main()
{

}