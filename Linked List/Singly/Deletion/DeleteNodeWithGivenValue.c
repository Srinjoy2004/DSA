#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *del(struct node *head, int data1)
{
    if (head->data = data1)
    {
        struct node *y = head;
        head = head->next;
        free(y);
        return head;
    }
    else
    {
        struct node *p = head;
        struct node *q = head->next;
        while (q->next != NULL && q->data != data1)
        {
            p = p->next;
            q = q->next;
        }
        if (q->data = data1)
        {
            p->next = q->next;
            free(q);
            return head;
        }
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);
    printf("After Deletion \n");
    head = del(head, 11);
    linkedListTraversal(head);
    return 0;
}
