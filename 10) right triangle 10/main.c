#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,j , count = 0 , num_row = 1 , num_col,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);

    for(i=1;i<=rows;i++ )
    {
        num_col = num_row;
        for(j=1; j<=rows*2;j++)
        {
            if(j<=2+count)
            {
                if(i==1)
                {
                    num_col = num_col;
                    printf("%d",num_col);
                }
                else if(i!=1 && j<= i )
                {
                    printf("%d",num_col);
                    num_col--;
                }
                else if(i!=1 && j>i)
                {
                    num_col++;
                    printf("%d",num_col);
                }
            }
            else
            {
                printf(" ");
            }
        }


        num_row++;
        count = count+2;
        printf("\n");
    }
    return 0;
}
