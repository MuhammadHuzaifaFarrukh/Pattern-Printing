#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0;
    int rows;
    int num ;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {
        num = i ;
        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>=rows-count)&&(j<=rows+count) )
            {
                printf("%d",num); //Use num%10 if you want numbers only single digit.
                if(j<rows)
                {
                    num--;
                }
                else
                {
                    num++;
                }
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
