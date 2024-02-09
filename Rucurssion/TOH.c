#include <stdio.h>
void TOH(char A, char B, char C, int n)
{
    if (n == 1)
    {
        printf("Move 1 from %c to %c \n", A, C);
        return;
    }
    TOH(A, C, B, n - 1);
    printf("move %d from %c to %c \n", n - 1, A, C);
    TOH(C, A, B, n - 1);
}
int main()
{
    TOH('A', 'B', 'C', 2);
    return 0;
}