#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num_row = 0,num_col;
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);
    for(i=1; i <=rows ; i++)
    {
        if(i%2!=0) //For Numbers at row , by num_row.
        {
            num_row +=1; //Add 1 for odd rows
        }
        else
        {
            num_row -=1; // This is for even row , but the value coming from odd row is one ahead so we minus it by 1
            num_row += i; //Add row number for even rows.

        }
        num_col = num_row;

        for(j=1;j<=rows*2-1 ; j++)
        {
            if(j<=2*i-1) // Numbers / Stars are at Odd Sequences of j
            {
                if(j%2!=0)  // We want to print numbers at odd places of j for every i.
                {
                    printf("%d",num_col);
                    if(i%2!=0) //For every odd row , numbers should increase.
                    {
                        num_row++;
                        num_col++;
                    }
                    else
                    {
                        num_col--;

                    }
                }
                else
                {
                    printf("*");
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
