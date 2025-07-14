#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<=0 || rows>=11);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j==i || j==rows+1-i)
            {


                if(j==rows+1-i)
                {
                    printf("/");
                }
                 else //You may change these if else conditions to change the pattern of cross slashes as you please
                {
                    printf("\\");//Backslash is an espace sequence character so it is written twice to print once
                }
            }
            else
            {

                printf("*");

            }
        }
        printf("\n");
    }
    return 0;
}
