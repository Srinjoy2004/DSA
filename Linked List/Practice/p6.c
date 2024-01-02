#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct node *i(int data, struct node *head)

{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node *insert(int data, int index, struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    int i = 0;
    struct node *p = head;
    while (index - 1 != i)
    {
        i++;
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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
    printf("\nafter insertion \n");
    head = i(69, head);
    traversal(head);

    return 0;
}