#include <stdio.h>

int main()
{
    int i=1,j,count=0,rows;
    char ch;
    while(i)
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
        if(rows>=0)
        {
            i=0;
        }
    }

    i=1;
    while(i<=rows)
    {
        ch = 'A';
        j=1;
        while(j<=rows*2-1)
        {
            if(j>=i && j<=(rows*2-1-count))
            {
                printf("%c ",ch);
                ch=ch+1;
            }
            else
            {
                printf(" ");
            }
            j=j+1;
        }
        count=count+1;
        i=i+1;
        printf("\n");
    }

    return 0;
}
