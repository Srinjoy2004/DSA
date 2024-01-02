#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
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

    head->data = 12;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = NULL;

    display(head);
    return 0;
}