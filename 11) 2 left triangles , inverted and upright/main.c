#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0,rows;
    int num;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);
    for(i=1;i<=rows*2-1;i++)
    {
        num = 1;
        if(i<= rows)
        {
            count++;
        }
        else
        {
            count--;
        }
        for(j=1; j<=rows ; j++ )
        {
            if(j>rows-count)
            {
                printf("%d",num);
                num++;
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
