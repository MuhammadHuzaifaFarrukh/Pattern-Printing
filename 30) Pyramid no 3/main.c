#include<stdio.h>
int main()
{
    //1st Method with if else :
    /*
    int i,j;
    int rows,count=0;
    int num = 0;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0||rows>=11);

    for(i = 1; i<=rows;i++)
    {
        for(j=1;j<=rows*2-1;j++)
        {
            if( ( j>=rows-count) && (j<=rows+count) )
            {
                if(j<=rows)
                {
                    num++;
                }
                else
                {
                    num--;
                }
                printf("%d",num); //Use num%10 for single digits only
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
        int i=1,j,spaces;
        int rows;
        do
        {
            printf("Enter the number of rows : ");
            scanf("%d",&rows);
        }while(rows<=0 || rows>=11);

        while (i <= rows)
        {

             spaces = rows - i;
             j = 0;
            while (j < spaces)
            {                   //A Loop for printing spaces
                printf("  ");
                j++;
            }


            int num = i;
            j = 0;
            while (j < i)
            {
                printf("%d ", num); //Loop for printing numbers as first number is according to the row number
                num++; //Use num%10 for single digits only
                j++;
            }


            num = num - 2;
            j = 0;
            while (j < i - 1)
            {
                printf("%d ", num); //Use num%10 for single digits only
                num--;
                j++;
            }

            printf("\n");
            i++;
        }
        return 0;
}
