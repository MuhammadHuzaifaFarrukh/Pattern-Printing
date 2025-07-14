#include<stdio.h>
int main()
{
    int i,j;
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0||rows>=11);
    //1st method :
    /*
    for(i = 1; i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j<=rows - i + 1)
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
    for(i = 1; i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                //printf(" "); Not needed as space is after the pattern not before it.
            }
        }
        printf("\n");
    }
*/


    //2nd method : Without if else

    for(i = 1; i<=rows;i++)
    {
        for(j=1;j<=rows-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i = 1; i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {

                printf("*");


        }
        printf("\n");
    }


    return 0;
}
