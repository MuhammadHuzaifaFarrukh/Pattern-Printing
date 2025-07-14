#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    int count =0;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=101);


    for(i=1;i<=rows*2-1;i++)
    {
        if(i<=rows)
        {
            count ++;
        }
        else
        {
            count--;
        }
        for(j=1;j<=rows*2-1;j++)
        {
            if(j<=rows+1-count || j>=rows-1+count)
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
