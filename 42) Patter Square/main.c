#include <stdio.h>

int main()
{

    //This pattern seems like N = 5 will print 5 rows but its not , N = 5 will print 3 rows always difference of 2 rows. Here N does not mean the row number.
    // If N = 5 represented the number of rows then it would have been super easy . We just had to find the logic to wrap the numbers.
    int i,j , num,N ;
    do
    {
        printf("Enter the number of N (above 2) ");
        scanf("%d",&N);
    }while(N<3 || N>10);

    for(i=1;i<=(N-2);i++)
    {
       num = 2*i-1;
       if(num>9)
       {
           num = 2*1 - 1;
       }

        for(j=1;j<=(N-2);j++)
        {
            printf("%2d",num);
            num = num+2;
            if(num>9)
            {
                num = 1;
            }
        }

        printf("\n");
    }


    return 0;
}
