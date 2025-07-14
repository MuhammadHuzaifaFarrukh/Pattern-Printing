#include <iostream>

using namespace std;

//We can remove the two for loops by using another helper function which is also recursive itself as done below this program
void pattern(int rows, int x )
{
    if(x > rows)
    {
        return;
    }
    else
    {
        for(int i = 1; i<=x ; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        pattern( rows, x+1 );
    }

}

int main()
{
    int h;
    cout<<"Enter the height of the pattern : ";
    cin>>h;


    int i = 1;
    pattern(h, i);

    return 0;
}












/*
//Here the work done by nested loops is replaced by two recursive for loops.

// Recursive function to print a single row of stars
void printStars(int count)
{
    // Base case: If count is 0 or less, stop printing stars for this row
    if (count <= 0)
    {
        return;
    }
    // Recursive step: Print one star, then print the rest
    cout << "* ";
    printStars(count - 1); // Call itself to print the remaining stars
}

// Recursive function to print the pattern row by row
void pattern(int rows, int x)
{
    // Base case for the pattern recursion
    if (x > rows)
    { // Changed base case to 'x > rows' for consistency
        return;
    }

    // Recursive step for the pattern
    printStars(x); // Use the recursive helper to print 'x' stars for the current row
    cout << endl; // Move to the next line after printing the stars

    pattern(rows, x + 1); // Recurse for the next row
}
*/
