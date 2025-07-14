#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count =0;
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows >10);

    for(i=1;i<=rows ;i++)
    {
        for(j=1;j<=rows*2;j++)
        {
            if(j>=rows - count && j<=rows*2 - count)
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
