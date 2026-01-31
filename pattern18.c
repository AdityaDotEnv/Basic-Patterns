#include <stdio.h>

int main()
{
    int n, i, j, k = 69;

    printf("\nEnter n value: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        k = 69;
        for (j = 0; j <= i; j++)
        {
            printf("%c", k - j);
        }
        printf("\n");
    }

    return 0;
}