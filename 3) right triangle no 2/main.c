#include<stdio.h>
int main()
{
    int i,j,rows;
    int num = 1;
    //Method without if else
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
        /* code */
    } while (rows<=0 || rows>=11);

    /*
    for(i=1;i<=rows ; i++)
    {
        for(j=1 ; j<=i;j++)
        {
            printf("%d\t",num);
            num+=2;
        }
        printf("\n");
    }

    */

    //2nd Method with if else :
    for(i=1;i<=rows ; i++)
    {
        for(j=1 ; j<=rows;j++)
        {
            if(j<=i)
            {
                printf("%d",num);
                num+=2;
                printf("\t");
            }
            else
            {
                //printf(" "); not required here as space is after the pattern.
            }
        }
        printf("\n");
    }

    return 0;
}
