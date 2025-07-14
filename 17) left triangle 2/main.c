#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int rows;
    char ch_rows = 'A'-1 ,ch_col;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows >=11);

    for( i =1; i<=rows; i++)
    {
        ch_rows = ch_rows + i ;

        //Wrap Characters of rows and columns :
        if (ch_rows > 'Z')
        {
            ch_rows = ch_rows - 'Z' + 'A' - 1;
        }
        ch_col = ch_rows;


        for(j=1 ; j<=rows ; j++)
        {
            if(j>rows-i)
            {
                printf("%c",ch_col);
                ch_col--;

        //Wrap Characters of rows and columns :
                if (ch_col < 'A')
                {
                    ch_col = 'Z';
                }
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
