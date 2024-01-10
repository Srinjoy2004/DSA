#include <stdio.h>
void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
void selection(int A[], int n)
{
    int minindex;
    for (int i = 0; i < n - 1; i++)
    {
        minindex = i;
        for (int j = 1 + i; j < n; j++)
        {
            if (A[minindex] > A[j])
            {
                minindex = j;
            }
        }
        int temp = A[i];
        A[i] = A[minindex];
        A[minindex] = temp;
    }
}
int main()
{
    int A[] = {5, 9, 69, 1, 2, -100};
    int n = sizeof(A) / sizeof(int);
    // or  int n = sizeof(A) / sizeof(A[0]);
    display(A, n);
    selection(A, n);
    printf("\n");
    display(A, n);
    return 0;
}