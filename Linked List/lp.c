#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void tl(struct Node *head)
{
    while (head != NULL)
    {
        printf("element=%d\n", head->data);
        head = head->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 69;
    second->next = third;

    third->data = 80;
    third->next = NULL;

    tl(head);
    return 0;
}