#include <stdio.h>

int main()
{
    int i, j, n, start = 1;

    printf("\nEnter N:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (j = 0; j <= i; j++)
        {
            printf("%d ", start);
            start = 1 - start;
        }

        printf("\n");
    }

    return 0;
}