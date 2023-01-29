#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void createlist(struct node **head,int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode ->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        struct node *temp=*head;
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
        cout<<"--> "<<temp->data;
        temp=temp->next;
    }
}
struct node * mergetwo(struct node*head1,struct node *head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    struct node *ptr=head1;
    if(head1->data<head2->data)
    {
        ptr=head1;
        head1=head1->next;
    }
    else
    {
        ptr=head2;
        head2=head2->next;
    }
    struct node *curr=ptr;
    while(head1 && head2)
    {
        if(head1->data<head2->data)
        {
            curr->next=head1;
            head1=head1->next;
        }
        else
        {
            curr->next=head2;
            head2=head2->next;
        }
        curr=curr->next;
    }
    if(head1!=NULL)
    {
        curr->next=head1;
    }
    else
    {
        curr->next=head2;
    }
    return ptr;
}
int main()
{
    struct node *head=NULL;
    createlist(&head, 2);
    createlist(&head, 3);
    createlist(&head, 4);
    display(head);
    cout << endl;
    struct node *head1 = NULL;
    createlist(&head1, 2);
    createlist(&head1, 5);
    createlist(&head1, 6);
    display(head1);
    cout << endl;
    struct node *res = mergetwo(head, head1);
    display(res);
    return 0;
}