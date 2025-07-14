#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num = 1;
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {

        if(i%2==0)
        {
            num = 0;
        }
        else
        {
            num = 1;
        }

        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf(" %d",num);
                num = 1 - num;
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
