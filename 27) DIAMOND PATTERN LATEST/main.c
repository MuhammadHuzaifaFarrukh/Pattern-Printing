#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0;
    int rows;


    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=(rows); i++)
    {

        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>=rows-count)&&(j<=rows+count) )
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
    count = rows - 2;

    for( i =rows-1 ; i>=1; i--)
    {

        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>=rows-count)&&(j<=rows+count) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        count--;
        printf("\n");
    }



    //2nd Method , with a little change and using only one loop :

   /*
    for( i =1; i<=(rows*2-1); i++)
    {
        if(i<=rows)
        {
            count++;
        }
        else
        {
            count--;
        }

        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>=rows+1-count)&&(j<=rows-1+count) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }

        printf("\n");
    }*/

    return 0;
}
