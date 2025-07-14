#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,count = 0,rows;
    char ch;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);
    for( i = 1; i<=rows ; i++)
    {
        ch = 'A';

        for(j=1;j<=rows*2-1 ; j++)
        {
            if( j>= rows-count && j<= rows+count )
            {
                printf("%c",ch);

                 // Wrap-around logic for alphabets

                if (j < rows)
                {
                    ch++;
                    /*
                    if (ch > 'Z') // Wrap around to 'A' after 'Z'
                    {
                        ch = 'A';
                    }
                    */
                }
                else
                {
                    ch--;
                    /*
                    if (ch < 'A') // Wrap around to 'Z' after 'A'
                    {
                        ch = 'Z';
                    }
                    */
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
