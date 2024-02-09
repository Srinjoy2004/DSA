#include <stdio.h>
void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
void insertion(int A[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {

            int temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;

            // A[j + 1] = A[j];
            // j--;
        }
        //  A[j + 1] = key;
    }
}

int main()
{
    int A[] = {5, 9, 69, 1, 2, -100};
    int n = sizeof(A) / sizeof(int);
    // or  int n = sizeof(A) / sizeof(A[0]);
    display(A, n);
    insertion(A, n);
    printf("\n");
    display(A, n);
    return 0;
}
// time O(n)
// space O(1)