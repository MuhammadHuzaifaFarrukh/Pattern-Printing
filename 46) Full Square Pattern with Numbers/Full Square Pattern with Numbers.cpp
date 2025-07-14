#include <iostream>

using namespace std;

void pattern(int rows , int x)
{
    if(x > rows)
    {
        return;
    }
    else
    {
        for(int i = 1; i<=rows; i++)
        {
            int k = (x+i-1)%rows;
            if(k == 0)
            {
                k = rows;
            }
            cout<<k;
        }
        cout<<endl;
        pattern(rows , x+1);
    }
}

int main()
{
    int h;
    cout<<"Enter the height of the pattern : ";
    cin>>h;

    pattern(h,1);

    return 0;
}








/*


// Recursive function to print numbers for a single row
// 'rows' is the total height of the pattern
// 'x' is the current row number (from the outer recursion)
// 'col_idx' is the current column index (replaces 'i' from the for loop)

//i = col_index
void printRowNumbers(int rows, int x, int i)
{
    // Base Case for printing numbers in a row:
    // If we have printed all 'rows' numbers for the current row, return.
    if (i > rows)
    {
        return;
    }

    // Calculate the number 'k' for the current position
    int k = (x + i - 1) % rows;
    if (k == 0)
    {
        k = rows;
    }

    // Print the number
    cout << k;

    // Recursive Step: Call itself to print the next number in the same row
    printRowNumbers(rows, x, i + 1);
}

// Recursive function to generate the pattern row by row
// 'rows' is the total height of the pattern
// 'current_row' is the current row number being processed (replaces 'x' from your original pattern function)
void pattern(int rows, int current_row)
{
    // Base Case for the pattern recursion:
    // If the current row exceeds the total number of rows, stop.
    if (current_row > rows)
    {
        return;
    }

    // Recursive Step for the pattern:
    // 1. Call the helper recursive function to print numbers for the current row
    printRowNumbers(rows, current_row, 1); // Start printing from column 1

    // 2. Move to the next line after printing the current row
    cout << endl;

    // 3. Recurse for the next row
    pattern(rows, current_row + 1);
}
*/
