#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0;
    int rows;
    char ch ;

    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows >11);

    for( i =1; i<=rows; i++)
    {
        ch = 'A';

        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j<=rows-count)||(j>=rows+count) )
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }

           if (j < rows)
            {
                ch++;
                // Wrap around to 'A' after 'Z' for rows more than 26
                /*
                if (ch > 'Z')
                {
                    ch = 'A';
                }
                */
            }
            else
            {
                ch--;
                // Wrap around to 'A' after 'Z'
                /*
                if (ch < 'A')
                {
                    ch = 'Z';
                }
                */
            }


        }
        count++;
        printf("\n");
    }
    return 0;
}
