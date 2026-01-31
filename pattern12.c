#include <stdio.h>

int main()
{
    int n, i, j;
    printf("\nEnter n value: ");
    scanf("%d", &n);

    int spaces = 2 * (n - 1);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");

        spaces = spaces - 2;
    }

    return 0;
}