#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void createlink(struct node **head, int d)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        struct node *temp = (*head);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void show(struct node *head)
{
    struct node*temp=head;
    while(temp)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
}
struct node *kdelete(struct node **head,int n)
{
    struct node *start=(struct node *)malloc(sizeof(struct node));
    start->next=(*head);
    struct node *fast=start;
    struct node *slow=start;
    for(int i=1;i<=n;++i)
    {
        fast=fast->next;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return slow->next;
}
int main()
{
    struct node *head = NULL;
    createlink(&head, 1);
    createlink(&head, 2);
    createlink(&head, 3);
    createlink(&head, 4);
    createlink(&head, 5);
    createlink(&head, 6);
    createlink(&head, 7);
    printf("Before Deletion\n");
    show(head);
    printf("\n");
    struct node *imp=kdelete(&head,4);
    //free(imp);
    printf("After Deletion\n");
    show(head);
    return 0;
}