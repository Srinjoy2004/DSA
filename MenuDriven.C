
#include <stdio.h>

int main()
{
    int a = 0;
    int n;
    printf("\nEnter 1 for 1\nEnter 2 for 2\nEnter 3 for 3\nEnter 4 for exit\nenter the choice\n");

    scanf("%d", &n);
    while (42)
    {
        printf("enter the choice ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;

        case 3:
            printf("3\n");
            break;

        case 4:

            printf("good bye\n");
            //  break;
            return 0;
        default:
            printf("invalid");
        }
    }
    return 0;
}