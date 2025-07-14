#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int rows,num;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {
        num = 1;
        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                //You may use num = 1- num instead of below if-else as 1-0 is 1 and 1-1 is 0 so alternate binary numbers are produced.
                if(j%2==0)
                {
                    num = 0;
                }
                else
                {
                    num = 1;
                }
                printf("%d",num);

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
