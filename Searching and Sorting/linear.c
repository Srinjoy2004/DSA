#include <stdio.h>

int main()
{
    int c = 0;
    printf("enter the number u want to search ");
    int n;
    scanf("%d", &n);
    int i;
    int arr[5] = {2, 7, 1, 3, -100};
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            c++;
            printf("element found at index %d and position %d ", i, (i + 1));
            break;
        }
        else if ((i + 1) == 5 && c == 0)
        {
            printf("element not found");
        }
    }

    return 0;
}