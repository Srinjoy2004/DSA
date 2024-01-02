#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
struct node *insert(struct node *head, struct node *pos, int data1)
{
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    int i = 0;
    struct node *p2 = head;
    while (p2->next != pos)
    {

        p2 = p2->next;
    }

    p1->next = pos->next;
    pos->next = p1;
    p1->data = data1;
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
    printf("\n");
    head = insert(head, second, 69);
    traversal(head);
    return 0;
}