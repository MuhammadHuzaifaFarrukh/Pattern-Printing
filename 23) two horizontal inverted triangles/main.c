#include<stdio.h>
int main()
{
    /*
    //1st Method with if else :
    int i,j,rows,count = 0;

    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);


    for(i=1;i<=rows ; i++)
    {
        for(j=1 ; j<=rows*2+1;j++)
        {
            if(  (j<=rows - count ) || (  (j<=rows*2 +1 -count)   && (j>=rows+2 )  ) )
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
    */

       //2nd Method without if else :
       int j;
    int k = 1;
    int rows;
    int i ;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows <=0 || rows >=11);
    i = rows;
    while(i>=1)
    {
        j=1;
        while(j<=i)
        {
            printf("*"); // first triangle with stars *
            j = j+1;
        }
        j=1;
        while(j<=k)
        {
            printf(" "); //printing spaces between the 2 star patterns.
            j = j+1;
        }
        j = 1;
        while(j <=i)
        {
            printf("*"); // first triangle with stars *
            j = j+1;
        }
        k = k + 1;
        i = i - 1;

        printf("\n");
    }



    return 0;
}
