#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows,count = 0;

    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);

    for(i=1;i<=(rows*2-1);i++)
    {
        if(i<=rows)
        {
            count++;
        }
        else
        {
            count--;
        }
        for(j=1;j<=rows;j++)
        {
            if(j<=count)
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
