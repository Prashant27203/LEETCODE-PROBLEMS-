#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int val;
    struct node *next;
};
struct node *add(struct node *l1, struct node *l2)
{
    struct node *dummy = (struct node *)malloc(sizeof(struct node));
    dummy->val = 0;
    dummy->next = NULL;
    struct node *temp = dummy;
    int carry = 0;
    while ((l1 != NULL || l2 != NULL) || carry)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;
        struct node *node = (struct node *)malloc(sizeof(struct node));
        node->val = sum % 10;
        node->next = NULL;
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
}
void createlink(struct node **head, int d)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->val= d;
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
    struct node *temp = head;
    while (temp)
    {
        printf("%d", temp->val);
        temp = temp->next;
    }
}
int main()
{
    struct node *head = NULL;
    createlink(&head, 1);
    createlink(&head, 2);
    createlink(&head, 3);
    createlink(&head, 4);
    createlink(&head, 5);
 struct node *  head1 = NULL;
    createlink(&head1, 6);
    createlink(&head1, 7);
    createlink(&head1, 8);
    createlink(&head1, 9);
    createlink(&head1, 0);
    struct node *imp=add(head,head1);
    show(imp);
    return 0;
}