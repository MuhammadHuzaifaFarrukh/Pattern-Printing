#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int rows;
    char ch = 'A';
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {
        ch = 'A' + i - 1;
        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf(" %c",ch);
                ch--;
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
