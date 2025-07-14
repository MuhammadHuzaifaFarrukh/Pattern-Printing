#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    //int count = 0;
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);
    for(i =1; i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if( j== i || j == rows+1 - i ) //This condition works for even and odd both number of rows.
            {
        //This Condition works only for odd number of rows .
        // ((j == 1 + count || j == rows - count) && (i != (rows + 1) / 2)) || (j == (rows + 1) / 2 && i == (rows + 1) / 2)
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        //count++;
        printf("\n");
    }
    return 0;
}
