#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}