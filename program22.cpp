#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next ;
    int flag=0;
};
void createlink(struct node **head, int d)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->next = NULL;
    newnode ->flag=0;
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
bool detectloop(struct node *h)
{
    while(h)
    {
        if(h->flag==1)
            return true;
        h->flag=1;
        h=h->next;
    }
    return false;
}
int main()
{
    struct node *head = NULL;
    createlink(&head, 10);
    createlink(&head, 25);
    createlink(&head, 35);
    createlink(&head, 45);
    head->next->next->next->next=head;
    if(detectloop(head))
    {
        printf("Loop Detected\n");
    }
    else
    {
        printf("No Loop Detected\n");
    }
}