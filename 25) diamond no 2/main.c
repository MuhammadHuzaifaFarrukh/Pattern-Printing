#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0;
    int rows , num;


    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);



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
         num = count -1;

        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>=rows+1-count)&&(j<=rows-1+count) )
            {

                printf(" %d",num%10); //Value will not go above single digit

                if(j<rows)
                {
                    num++;
                }
                else
                {
                    num--;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
