#include <stdio.h>
#include <stdlib.h>

int main()
{

    //There are famous 2 methods of printing star patterns . There maybe more , but usually , we use these two methods.
    //Use Input Validation in both methods for number of rows or columns so that user does not enter a negative value or the user does not enter a huge value. Here we keep it from 1 to 10 using do-while. You may use for or while loops as well by flags or break/continue statements.
    // Usually we ask number of rows from user and the whole pattern is printed like if a pattern is of 5 rows and 10 col then we just ask row number and write col no as row times 2 but if you want the user to ask column number as well just so to print half of the pattern or more or less  , full or not then you should input column from user and write j<=column. Less columns will print half of the pattern , more columns will print the same pattern for the given rows but spaces will be increased in this way.



    // If in both methods , the pattern is in numbers to print , then use num%10 if you want to print a single digit for keeping a symmetry
    //If it is a character then wrap greater than Z to A and less than A to Z.

    /*

    //First Method , conventional i.e the use of loops without any if else condition. For this method we must know the conditions of basic 4 , 2 upright and 2 inverted triangles to print spaces , char , or numbers etc. We use for loop for each category to print in an outer for loop . Printing is done inside the inner for loops. For our ease we divide the shape into triangles or geometrical shapes and we print pattern seeing it row-wise for this method.
    int i,j,k,rows,count = 0;
     do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);

    char ch;
    for(i=1;i<=rows;i++)
    {
        ch= 'A';

        for(j=1; j<=(rows-1)-i+1;j++)   //if 4 rows then rows-1 = 3 spaces
        {
            printf(" ");
        } //For Spaces.


        for ( j=rows;j>=rows-i;j-- )
        {
               printf("%c",ch);
               ch++;
        }//For Characters.

        for(k=1;k<=i ;k++ )
        {
            printf("%d",k);
        } //For numbers .

    printf("\n");

    }
    */


    //2nd Method : Using Single nested loop and if-else conditions.We first use one outer loop that controls rows and inner loop that controls columns. Then think the pattern for n=4 or n=5 value pattern and draw it first by thinking it as a grid. You will write values of i and j for stars that occur or that don't occur and make a relation between i and j using relational operators. Your loop should iterate through whole grid but the relation between i and j which you find will be put in if , else if or else or ternary condition operators and you may print a space or star. If pattern consists of char and numbers or any other then use separate variables and separate conditions for controlling these numbers. First try to make a pattern of stars using any of the above 2 methods and then print numbers .

   /*

   Basic Skeleton for 2nd Method :

   int i,j;

    for()
    {
        for()
        {
            if()
            {
                printf("*");
            }
            ....
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }*/








    int i,j,count = 0,rows;
    char ch;
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
    }while(rows<0 || rows>10);

    for (i=1;i<=rows ;i++ )
    {
        ch = 'A';
        for(j=1;j<=rows*2;j++)
        {
          if(j>= rows - count && j<= rows+1 + count)
          {
              printf("%c",ch);
               // Wrap-around logic for alphabets and numbers
               /*
                if (ch >= 'A' && ch <= 'Z')
                {
                    ch++;
                    if (ch > 'Z') // Wrap around to 'A' after 'Z'
                    {
                        ch = 'A';
                    }
                }
                else if (ch >= '1' && ch <= '9')
                {
                    ch++;
                    if (ch > '9') // Wrap around to '1' after '9'
                    {
                        ch = '1';
                    }
                }
                */
              if(j==rows) // We don't use j>rows as we want to initialize the numbers from 1 from half way otherwise it will always start each row numbers with 1 and keep columns 1 as well
              {
                  ch = '1';
              }
          }
          else
          {
              printf(" ");
          }
        }
        count++;
        printf("\n");
    }


    //3rd Method , using 2D arrays , although its not a good approach as it increases the storage much. It should only be used for complex patterns which cannot be done by above methods like spiral pattern numbers in C.
    //Here is a simple program by 2D arrays :
    /*
    int n = 5;
    char arr[n][n];

    // Fill the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                arr[i][j] = '*';
            else
                arr[i][j] = ' ';
        }
    }

    // Print the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    */

    return 0;
}
