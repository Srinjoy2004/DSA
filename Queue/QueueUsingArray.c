#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q, int size)
{
    q->size = size;
    q->rear = q->front = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void enqueue(struct queue *q, int x)
{
    if (q->rear == q->size - 1)

    {
        printf("queue is full");
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
void display(struct queue *q)
{
    int i;
    for (i = q->front + 1; i <= q->rear; i++)
    {
        printf("%d ", q->Q[i]);
    }
}
int dequeue(struct queue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        printf("queue is empty");
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
int main()
{
    struct queue q;
    create(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);
    printf("\n");

    printf("%d ", dequeue(&q));
    printf("%d ", dequeue(&q));

    return 0;
}