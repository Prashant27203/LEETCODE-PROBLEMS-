#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void createlist(struct node **head,int data)
{
    struct node *temp;
    temp=*head;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(temp==NULL)
    {
     *head=newnode;   
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
    struct node*temp;
    temp=head;
    while(temp)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}
struct node * addto(struct node *l1,struct node *l2)
{
    struct node*dummy=(struct node*) malloc(sizeof(struct node));
    struct node *temp=dummy;
    int sum=0,carry=0;
    while(l1||l2||carry)
    {
        sum=0;
        if(l1!=NULL)
        {
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=carry;
        carry=sum/10;
        struct node *n=(struct node *)malloc(sizeof(struct node));
        n->data=sum%10;
        n->next=NULL;
        temp->next=n;
        temp=temp->next;
    }
return dummy->next;
}
int main()
{
    struct node*head=NULL;
    createlist(&head,2);
    createlist(&head,4);
    createlist(&head,3);
    display(head);
    cout<<endl;
    struct node*head1=NULL;
    createlist(&head1,5);
    createlist(&head1,6);
    createlist(&head1,4);
    display(head1);
    cout<<endl;
    struct node *res=addto(head,head1);
    display(res);
    return 0;
}