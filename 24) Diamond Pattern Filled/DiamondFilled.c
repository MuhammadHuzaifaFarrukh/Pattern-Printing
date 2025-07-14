#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    // Input number of rows for the top half of the diamond
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for the upper part of the diamond (including middle row)
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (2 * n - 1); j++)
        {
            // Fill all positions between the left and right boundaries
            if (j >= n - i + 1 && j <= n + i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Loop for the lower part of the diamond
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= (2 * n - 1); j++)
        {
            // Fill all positions between the left and right boundaries
            if (j >= n - i + 1 && j <= n + i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }



    return 0;
}