#include <stdio.h>

int main()
{
    int i, j, n, temp;
    printf("Enter the number of rows in pyramid of stars you wish to see ");
    scanf("%d", &n);
    temp = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < temp; j++)
            printf(" ");
        temp--;
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}