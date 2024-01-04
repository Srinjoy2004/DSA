#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;
void enqueue(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("stack is full \n");
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = 1;
    struct node *p;
    if (front == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        p = front;
        x = front->data;
        front = front->next;
        free(p);
    }
    return x;
}
void display()
{
    struct node *p = front;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    printf("%d ", dequeue());
    return 0;
}