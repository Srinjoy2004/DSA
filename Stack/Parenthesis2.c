#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;
} *top = NULL;

void push(char x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("struct is full\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    char x = -1;
    struct node *t;
    if (top == NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void display()
{
    struct node *p;
    p = top;
    while (p != NULL)
    {
        printf("%c ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isBalanced(char *exp)
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (top == NULL)
                return 0; // Unbalanced
            else
            {
                char popped = pop();
                // Check if the popped bracket matches the expected closing bracket
                if ((exp[i] == ')' && popped != '(') ||
                    (exp[i] == ']' && popped != '[') ||
                    (exp[i] == '}' && popped != '{'))
                {
                    return 0; // Unbalanced
                }
            }
        }
    }
    // If the stack is empty at the end, the expression is balanced
    return (top == NULL) ? 1 : 0;
}

int main()
{
    char *exp = "{(a+b)*[c-d])";
    printf("%d\n", isBalanced(exp));

    char *exp2 = "{[a+b]*[c-d]}";
    printf("%d\n", isBalanced(exp2));

    char *exp3 = "((a+b)*(c-d)}";
    printf("%d\n", isBalanced(exp3));

    return 0;
}
