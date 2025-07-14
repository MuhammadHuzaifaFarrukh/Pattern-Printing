#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0;
    int rows,k;
    char ch ='1';
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows >=11);

    k=1;
    for( i =1; i<=rows; i++)
    {
        if(i%2==0)
        {
            ch = 'A';
        }
        else
        {
            ch = '1';
        }
        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>= rows-count)&& (j<=rows+count)&&(k) )
            {
                printf("%c",ch);

                /*
                // Wrap-around logic for numbers and alphabets
                if (ch >= '1' && ch <= '9')
                {
                    ch++;
                    if (ch > '9') // Wrap around to '1' after '9'
                    {
                        ch = '1';
                    }
                }
                else if (ch >= 'A' && ch <= 'Z')
                {
                    ch++;
                    if (ch > 'Z') // Wrap around to 'A' after 'Z'
                    {
                        ch = 'A';
                    }
                }
                */


                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }

        }
        k=1;
        count++;
        printf("\n");
    }
    return 0;
}
