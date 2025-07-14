#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num_rows=1,num_col;
    int rows;
    int count;

    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {
        num_col = num_rows;
        count = rows + 1 - i;

        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf(" %d",num_col);
                num_col = num_col - count ;
                count++;
            }
            else
            {
                printf(" ");
            }
        }

        num_rows = num_rows + 1 + rows - i ;
        printf("\n");
    }
    return 0;
}
