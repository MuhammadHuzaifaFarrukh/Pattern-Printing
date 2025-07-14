#include<stdio.h>
int main()
{
    int rows;
    int i,j;
    i=1;

    while (i)
    {
        printf("Enter the number of rows: ");
        scanf("%d",&rows);

        if (rows>0)
        {
            i=0;
        }

    }

    i=1;
    int num;
    while(i<=rows)
    {
        j=1;
        while(j<=rows-i)
        {
            printf(" ");
            j=j+1;
        }

        j=1;
        num=1;

        while (j<=i)
        {
            printf("%d ",num);
            num=(num* (i-j))/ (j);
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}
