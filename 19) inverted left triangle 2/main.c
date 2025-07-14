#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);

    for (i=1;i<=rows ;i++ )
    {
        num = rows-i;
        for (j=1;j<=rows ;j++ )
            {
                if(j<=rows- i + 1)
                {
                    printf("%d",num); //Use num%10 for single digits only
                    num--;
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
