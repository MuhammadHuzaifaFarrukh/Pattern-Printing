#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Trying to print the number zoom but for reverse number i.e for rows to 1.

    //These are actually the numbers which are maximum of ith row and jth column in case of 1 to rows
    //We change the index before and after half work by using some logics.

    //1st Method : Using max or min of indexes :
    int a,b,i,j,max,count_i = 1, count_j,rows;

    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }
    while(rows<0 || rows>10);

    for(i=1; i<=rows*2-1; i++)
    {
        count_j = 1 ;
        for(j=1; j<=rows*2-1; j++)
        {
            a = i;
            b = j;

            if(i<=rows)
            {
                a = rows + 1 - count_i ;
            }
            else
            {
                a = i - (rows-1);
            }

            if(j<=rows)
            {
                b = rows + 1 - count_j;

            }
            else
            {
                b = j - (rows-1);
            }

            //Checks if i or j indexes are greater from one another . Indexes for a/b : 4,3,2,1,2,3,4 for N=4;
            if(a>b)
            {
                max = a;
            }
            else
            {
                max = b;
            }


            printf("%d",max);

            count_j++;

        }
        count_i++;
        printf("\n");
    }








    //Trying to print the number zoom but for straight numbers i.e 1 to rows.
    /*
    //These are actually the numbers which are minimum of ith row and jth column in case of 1 to rows but maybe different for the reverse i.e rows to i.
    //We change the index after half work
    //This one's for Rows =4 , but just write here Rows instead of 4 and everything works

    //Method : Using max or min of indexes :

    int i,j,a,b,min;
    for(i=1;i<=4*2-1;i++)
    {

        for(j=1;j<=2*4-1;j++)
        {
            a = i;
            b = j;

            if(i>4)
            {
                a = 2*4-i;
            }
            if(j>4)
            {
                b = 2*4-j;
            }
            if(b<a)
            {
                min = b ;
            }
            else
            {
                min = a;
            }
            printf("%d",min);

        }

        printf("\n");
    }
    */















    //2nd Method : Using Differences of rows from borders : for reverse number zoom rows to 1.
    /*
    int diff,row,col,size,N = -1;
    while (N <= 0){
        printf("Enter a Positive integer N: ");
        scanf("%d", &N);
    }
    size = 2*N - 1;
    row = 0;
    while (row < size){
        col = 0;
        while (col < size){
            // find min difference from border
            diff = size + 1;
            if (row < diff){
                diff = row;
            }
            if (col < diff){
                diff = col;
            }
            if (size - 1 - row < diff){
                diff = size - row - 1;
            }
            if (size - 1 - col < diff){
                diff = size - col - 1;
            }
            printf("%d ", N - diff);
            col++;
        }
        printf("\n");
        row++;
    }
    */
















//Works only for N=4 correctly and for others N =1,2,3,5,6,.. , only upper part works.
    /*
     int i,j,count = 0;
     int rows;
     do
     {
         printf("Enter the number of rows : ");
         scanf("%d",&rows);

     }while(rows<0 || rows>10);

     int num = 4 ,k,num_k = 4 ;
     for(i=1;i<=4;i++)
     {
         num=4;

        for(j=1;j<=4;j++)
        {

            if( (( j>=1+count && j<=4*2-1 - count) && (i==1+count || i ==4*2-1-count )  )  || ( (j == 1+count || j == 4*2-1-count ) && ( i>1+count && i<4*2-1-count  ) )   )
            {
                printf("%d", num);
            }
            else
            {
                printf("%d",num);
                num--;
            }
        }

        int num_row=4,num_col;

        num_col = num_row;
        num_col = num_col-i+1;
        int num_col2 = num_col;


        for(j=1;j<=4-1;j++)
        {

            if(  j<4-i+1  )
            {
                 printf("%d",num_col);
            }
            else
            {
                 num_col2++;
                 printf("%d",num_col2);

            }
        }

         printf("\n");

         count++;
     }


     count = 0;
     num=2;
     int num_col2=2;
     int num_row2 = 2 + 1;

     for( i =1; i<=4-1; i++)
     {

         int num_row = 4 , num_col ;
         num_col=num_row;

         for(j=1 ; j<=(4) ; j++)
         {
             if( ( j>=4-1-count)&&(j<=4-1+count) )
             {
                 printf("%d",num);
             }
             else
             {
                 printf("%d",num_col);
                 num_col = num_col-1;
             }

         }

         int num_col3 = num_row2;


         for( j =1 ; j<=4-1;j++ )
         {
             if(j<=i)
             {
                 printf("%d",num_col2);
             }
             else
             {

                 printf("%d",num_col3);
                 num_col3++;

             }
         }


         num++;
         num_col2++;
         num_row2++;
         count++;
         printf("\n");


     }
    */


    return 0;
}
