#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {
        for(j=1 ; j<=rows ; j++)
        {
            if(j<= (rows-i)+1)
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
