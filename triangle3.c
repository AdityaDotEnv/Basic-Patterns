#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter N: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i == n || i + j == n + 1 || j - i == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}