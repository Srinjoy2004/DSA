#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *st)
{
    st->top = -1;
    printf("enter the size");
    scanf(" %d", &st->size);
    st->s = (int *)malloc(st->size * sizeof(int *));
}
void display(struct stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%d \n", st.s[i]);
    }
}
void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
int peek(struct stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
    {
        printf("invalid index\n");
    }
    else
    {
        x = st.s[st.top - pos + 1];
        // printf("%d ", st.s[st.top - pos + 1]);
    }
    return x;
}
int isEmpty(struct stack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}
int isFull(struct stack st)
{
    return st.top == st.size - 1;
}
int stackTop(struct stack st)
{
    if (!isEmpty(st))
    {
        return st.s[st.top];
    }
    else
        return -1;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    // push(&st, 60);
    // printf("the popped element is %d \n", pop(&st));
    printf("the peeked element is %d \n", peek(st, 2));
    printf("the popped element is %d \n", pop(&st));
    // printf("the popped element is %d \n", pop(&st));
    display(st);

    return 0;
}