#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0;
    int rows,k;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    k=1;
    for( i =1; i<=rows; i++)
    {
        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>= rows-count)&& (j<=rows+count)&&(k) )
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }

        }
        k=1;
        count++;
        printf("\n");
    }
    return 0;
}
