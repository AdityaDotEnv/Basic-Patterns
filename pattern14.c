#include <stdio.h>

int main()
{

    int n, i, j, k;

    printf("\nEnter n value: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        k = 65;
        for (j = 1; j <= i; j++)
        {
            printf("%c", k++);
        }
        printf("\n");
    }

    return 0;
}