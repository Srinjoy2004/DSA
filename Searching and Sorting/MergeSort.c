#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int *temp = (int *)malloc((high - low + 1) * sizeof(int));
    int index = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }

    while (right <= high)
    {
        temp[index++] = arr[right++];
    }

    for (int i = 0; i < index; i++)
    {
        arr[low + i] = temp[i];
    }

    free(temp);
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {9, 4, 7, 6, 3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    mergeSort(arr, 0, n - 1);

    printf("After Sorting Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
// merge sort