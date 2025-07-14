#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;

    //This pattern , I assume starts from N=7 as it will get strange below 7
   //This pattern is a square and a nested square of 3 by 3 sides for any boundary.
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<7 || rows>51); // we keep rows from 7 to 50.
    for(i=1;i<=rows ;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if((i==1 || i==rows || j==1 || j==rows) || ((i>=rows/2 && i<=rows/2+2) && (j>=rows/2 && j<=rows/2+2)) && (i==rows/2 || i==rows/2+2 || j==rows/2 || j==rows/2+2))
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
