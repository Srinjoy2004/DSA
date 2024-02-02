#include <stdio.h>
void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}

void bubble(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)

        {
            if (A[j] < A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {5, 9, 69, 1, 2, -100};
    int n = sizeof(A) / sizeof(int);
    // or  int n = sizeof(A) / sizeof(A[0]);
    display(A, n);
    bubble(A, n);
    printf("\n");
    display(A, n);
    return 0;
}