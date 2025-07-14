#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int rows;
    int num ,prev_row=0;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {
        num = 0;
        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf(" %d",num);
                num = num + prev_row;
            }
            else
            {
                printf(" ");
            }
        }
        prev_row = i;
        printf("\n");
    }
    return 0;
}
