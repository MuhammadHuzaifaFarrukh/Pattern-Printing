#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int fact = 1;

    for(int i = 1 ; i<=n ; i++)
    {
        fact = fact*i;
    }

    return fact;
}

int combination(int n , int r)
{
    return (    fact(n)          /  (   fact(n-r)*fact(r)       )      );
}

void print_pascal(int line)
{
    int i,j,count = 0 , r ;
    int k;

    k=1;
    for( i =1; i<=line; i++)
    {
        r=0;
        for(j=1 ; j<=(line*2)-1 ; j++)
        {
            if( ( j>= line-count)&& (j<=line+count)&&(k) )
            {
                printf("%3d",combination( count , r )); //Will work when the numbers like 3 digit numbers arrive
                r++;
                k = 0;
            }
            else
            {
                printf("   "); //For 3 digit numbers , we need 3 spaces.
                k = 1;
            }

        }
        k=1;
        count++;
        printf("\n");
    }
}

int main()
{
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);

    print_pascal(rows);

    return 0;
}



/*
Without Functions :
Calculate individual factorials then use formula of C(n,r) and then print the value in the if condition where stars to printed


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);

    int i,j,count = 0 , r ;
    int k,value = 1,n , l;
    int fact_n=1 , fact_r =1 ,fact_nr = 1;

    k=1;
    for( i =1; i<=rows; i++)
    {
        r=0;
        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if( ( j>= rows-count)&& (j<=rows+count)&&(k) )
            {
                int fact_n = fact_r = fact_nr =  1;
                n = count ;


            for( l = 1 ; l<=n ; l++)
            {
                fact_n = fact_n*l;
            }

            for(l = 1 ; l<=r ; l++)
            {
                fact_r = fact_r*l;
            }

            for(l = 1 ; l<=(n-r) ; l++)
            {
                fact_nr = fact_nr*l;
            }

            value  = (  fact_n  /         (  fact_r *fact_nr     )      );

            printf("%3d",value); //Will work when the numbers like 3 digit numbers arrive
                r++;
                k = 0;
            }
            else
            {
                printf("   "); //For 3 digit numbers , we need 3 spaces.
                k = 1;
            }

        }
        k=1;
        count++;
        printf("\n");
    }


    return 0;
}
*/
