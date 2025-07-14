#include<stdio.h>
int main()
{
    //Method with if else

    int i,j,count =0,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);

    for(i=1;i<=rows ; i++)
    {
        for(j=1;j<= rows*2 +1;j++)
        {
            if((j<=i) || (j<=rows+ 2 + count && j>=rows + 2))
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }

        }
        count++;
        printf("\n");
    }

    count = rows-2;

    for(i = rows - 1; i >= 1; i--)
    {
        for(j=1; j<=rows*2+1;j++)
        {
            if((j<=i) || (j>=rows+2 && (j<=rows+2+count)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        count--;
        printf("\n");
    }

    /*

    //Method without if else
    int i,j,k=1,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);

    i = 1;
    while(i<=rows) //Loop for printing upper triangle
    {
        j=1;
        while(j<=i)
        {

            printf("*"); //Printing stars for upper left triangle
            j = j+1;
        }
        j=1;
        while(j<=(rows-i))
        {
            printf(" "); //Printing Spaces on upper portion between left and right triangle
            j = j+1;
        }
        j = 1;
        while(j <=i)
        {
            printf("*"); //Printing stars for upper right triangle
            j = j+1;
        }
        //k = k + 1;
        i = i + 1;
        j = j+1;
        printf("\n");
    }

    //Now Printing Lower Triangle
    i = rows-1;
    k = 1;
    while(i>=1)
    {
        j=1;
        while(j<=i)
        {
            printf("*"); //Printing stars for lower left triangle
            j = j+1;
        }
        j=1;
        while(j<=(k+1))
        {
            printf(" "); //Printing Spaces on lower portion between left and right triangle
            j = j+1;
        }
        j = 1;
        while(j <=i)
        {
            printf("*"); //Printing stars for lower right triangle
            j = j+1;
        }
        k = k + 1;
        i = i - 1;
        j = j+1;
        printf("\n");
    }
    */

    return 0;
}
