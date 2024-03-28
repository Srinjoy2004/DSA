#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i <= n - 1; i++)
    {
        j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            // Swap elements directly without using a key variable
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

// time
// worst case ->O(n^2)
// average case ->O(n^2)
// best case ->O(n)
// space O(1)