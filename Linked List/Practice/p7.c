#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert(int data, struct node *head)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = head;
    return p;
}

struct node *insertinbetween(int data, struct node *head, int index)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    int i = 0;
    struct node *ptr = head;
    while (i != (index - 1))
    {
        i++;
        ptr = ptr->next;
    }
    p->data = data;
    p->next = ptr->next;
    return head;
}

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    traversal(head);
    head = insertinbetween(69, head, 2);
    traversal(head);
    return 0;
}