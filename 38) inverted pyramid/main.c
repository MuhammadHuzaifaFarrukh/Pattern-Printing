#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count=0,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows*2-1;j++)
        {
            if(j>=i && j<=(rows*2-1-count))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        count++;
        printf("\n");
    }

    return 0;
}
