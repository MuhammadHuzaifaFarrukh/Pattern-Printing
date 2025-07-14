#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);
    if(rows == 0)
    {
        //Nothing should happen
    }
    else
    {
        for(i = 1;i<=rows+2 ; i++) // User enter 4 , but rows are 6
        {

            for(j=1;j<=rows*2+1;j++)
            {
                if(i == rows + 1)
                {
                    printf(" ");
                }
                else if( (j<=rows*2+1 && i == rows+2) || (j==1 && i==1) || ( j==1 || j == i + count) )  // You may also not put a bracket around j==1 || j==i+count as they will be checked only for n rows .
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            count = 1;
            printf("\n");
        }
    }


    return 0;
}
