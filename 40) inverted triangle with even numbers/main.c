#include<stdio.h>
int main()
{
    int i,j,rows,k;
    int num = 0;
    //Method with if else
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
        /* code */
    } while (rows<=0 || rows>=11);
    /*
    for(i=1;i<=rows ; i++)
    {
        for(j=1 ; j<=rows;j++)
        {
           if (j>=i)
           {
            printf("%d",num);
            num+=2;
            printf("\t");//Needed because space is inside the pattern after each number

        }
        else
        {
         printf("\t"); // Needed because space is before the pattern.
        }


     }
     printf("\n");
 }
    */

    //Method without if else:

    for ( i = 1; i <=rows; i++) {

        // first inner loop for printing white spaces
        for ( j = 1; j <= (2 * i); j++) {
            printf(" ");
        }

        // second inner loop for printing star *
        for ( k = rows; k >= i; k--) {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}
