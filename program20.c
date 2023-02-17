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
void reverselink(struct node **head)
{
    struct node *next =NULL;
    struct node *prev=NULL;
    struct node *current=(*head);
    while(current)
    {
        next=current->next ;
        current->next =prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
void show(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d - >",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct node *head=NULL;
    createlink(&head, 10);
    createlink(&head, 25);
    createlink(&head, 35);
    createlink(&head, 45);
    createlink(&head, 55);
    createlink(&head, 65);
    createlink(&head, 75);
    printf("linked list before the reversal is =\n");
    show(head);
    printf("\n");
    reverselink(&head);
    printf("linked list after the reversal is =\n");
    show(head);
    return 0;
}