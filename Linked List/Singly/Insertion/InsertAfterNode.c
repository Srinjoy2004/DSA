// Time Complexity = O(n)
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
struct node *insert(struct node *head, struct node *pos, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = pos->next;
    pos->next = ptr;

    return head;
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
    head = insert(head, second, 69);

    printf("After Insertion \n");
    linkedListTraversal(head);
    return 0;
}
