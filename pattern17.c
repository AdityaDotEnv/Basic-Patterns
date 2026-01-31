#include <stdio.h>

int main()
{
    int i, j, n, k;

    printf("\nEnter n value: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        k = 65;

        int mid = (2 * i + 1) / 2;

        for (j = 1; j <= 2 * i + 1; j++)
        {
            printf("%c", k);

            if (j <= mid)
                k++;
            else
                k--;
        }

        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}