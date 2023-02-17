#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next ;
};
void createlink(struct node **head,int d)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode ->next=NULL;
    if(*head==NULL)
    {
     *head=newnode;   
    }
    else
    {
        struct node *temp=(*head);
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next =newnode;
    }
}
struct node *reverselink(struct node *head)
{
    struct node *next =NULL;
    struct node *prev=NULL;
    struct node *current=(head);
    while(current)
    {
        next=current->next ;
        current->next =prev;
        prev=current;
        current=next;
    }
    head=prev;
    return (head);
}
int checklist(struct node *list1,struct node *list2)
{
    while(list1&&list2)
    {
        if(list1->data!=list2->data)
        {
            return 0;
        }
        list1=list1->next;
        list2=list2->next;
    }
    return 1;
}
int main()
{
    struct node *head=NULL;
    createlink(&head,1);
    createlink(&head,1);
    createlink(&head,1);
    createlink(&head,1);
    createlink(&head,1);
    createlink(&head,1);
    createlink(&head,1);
struct node *list2=reverselink(head);
if(checklist(list2,head)==0)
{
    printf("List is not palindromic\n");
}
else
{
    printf("List is palindromic\n");
}
return 0;
}