#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (A[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (A[j] > pivot && j >= low)
        {
            j--;
        }

        if (i < j)
        {
            swap(&A[i], &A[j]);
        }
    }

    // Swap A[low] and A[j]
    swap(&A[low], &A[j]);
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  // sort left subarray
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    int A[] = {9, 4, 4, 8, 7, 5, 6};
    int n = 7;

    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);

    return 0;
}
// tuime Best Case: O(n log n)
// space O(log n)