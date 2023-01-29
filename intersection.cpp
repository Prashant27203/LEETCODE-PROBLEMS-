#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void createlink(struct node**head,int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
if(*head==NULL)
{
*head=newnode;
}
else
{
    struct node*temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
}
void createintersect(struct node**head1,struct node**head2,struct node**head3)
{struct node *t=*head1;
struct node*y=*head2;
struct node*u=*head3;
while(t->next!=NULL)
{
    t=t->next;
}
while(y->next!=NULL)
{
    y=y->next;
}
t->next=*head3;
y->next=*head3;
}
void display(struct node *head)
{
    struct node*temp=head;
    while(temp)
    {
        cout<<"==>"<< temp->data;
        temp=temp->next;
    }
}
struct node *detectintersect(struct node *head1,struct node*head2)
{
    struct node *a=head1;
    struct node *b=head2;
    if(head1==NULL||head2==NULL)
    {
        cout<<"No intersection";
    }
    while(a!=b)
    {
        a=a==NULL?head2:a->next;
        b=b==NULL?head1:b->next;
    }
    return a;
}
int main()
{
struct node *head1=NULL;
struct node *head2=NULL;
createlink(&head1,1);
createlink(&head1,2);
createlink(&head1,3);
createlink(&head2,4);
createlink(&head2,5);
createlink(&head2,6);
struct node *head3=NULL;
createlink(&head3,7);
createlink(&head3,8);
createlink(&head3,9);
createintersect(&head1,&head2,&head3);
display(head1);
cout<<endl;
display(head2);
struct node *k=detectintersect(head1,head2);
cout<<endl;
cout<<"Intersection point is:"<<k->data;
return 0;
}