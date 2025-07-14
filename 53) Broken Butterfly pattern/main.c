#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count = 0,flag,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);

    for(i=1;i<=3*rows ; i++)
    {
        for(j=1 ; j<=2*rows-1  ;   j++)
        {
            if(i<=rows)
            {
                if(j>=2*rows-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if(i<=2*rows)
            {
                flag =0;
                if(j==rows)
                {
                    printf("|");
                    flag=1;
                }
                if(j<= (i-rows-1))
                {
                    printf("*");
                    flag=1;
                }
                if(j>=i)
                {
                    printf("*");
                    flag=1;
                }
                if(flag==0)  //This Condition is just a flag that if all above conditions are false then a space should be printed. This if condition takes place of 3 else conditions above as we will have to use 3 else parts for spaces of 3 above independent ifs.
                {
                    printf(" ");
                }
            }
            else if(i<=3*rows)
            {
                if(j<=rows-count)  // You may also use j<= 3*n + 1 - i or rows*n + 1 - i , instead of count condition
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

        }

        if(i> 2*rows ) //Row must be greater than 2nd condition so that this is executed only for the bottom and 3rd part. We want count to increase only for the bottom part.
        {
            count++;
        }
        printf("\n");

    }
    return 0;
}
