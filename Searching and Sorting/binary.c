#include <stdio.h>

int main()
{
    int c = 0;
    printf("enter the number u want to search ");
    int n;
    scanf("%d", &n);
    int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int low = 0;
    int high = 4;
    int mid;
    // int c = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == n)
        {
            c++;
            break;
            //   return mid;
        }
        else if (arr[mid] > n)
        {
            low = mid - 1;
        }
        else if (arr[mid] < n)
        {
            low = mid + 1;
        }
    }
    // return -1;
    if (c > 0)
    {
        printf("element found at %d ", mid);
    }
    else if (c == 0)
    {
        printf("element not found");
    }
    return 0;
}