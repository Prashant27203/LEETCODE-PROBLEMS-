#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next ;
};
struct node *middlenode(struct node *head)
{
    int ctr=1;
    struct node *temp=head;
    struct node *temp1=head;
    while(temp)
    {
        temp=temp->next;
        ctr++;
    }
    for(int i=1;i<ctr/2;i++)
    {
        temp1=temp1->next;
    }
    struct node *delnode=temp1->next;
    temp1->next=temp1->next->next;
   return delnode;
}
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
    struct node *temp=head;
    while(temp)
    {
        printf("%d --> ",temp->data);
        temp=temp->next;
    }

}
int main()
{
    struct node *head=NULL;
    createlink(&head, 10);
    createlink(&head, 20);
    createlink(&head, 30);
    createlink(&head, 40);
    createlink(&head, 50);
    createlink(&head, 60);
    createlink(&head, 70);
    createlink(&head, 80);
    createlink(&head, 90);
    createlink(&head, 100);
    printf("Before Deletion the Link list Looks Like \n");
    show(head);
    printf("\n");
    printf("After Deletion the Link list Looks Like \n");
    struct node *imp = middlenode(head);
    show(head);
    free(imp);
    return 0;
}