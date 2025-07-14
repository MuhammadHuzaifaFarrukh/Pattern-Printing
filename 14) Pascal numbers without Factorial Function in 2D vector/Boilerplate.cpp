#include <iostream>
#include <vector>

using namespace std;

#include <vector> // Required for std::vector

std::vector<std::vector<int>> generate(int numRows)
{
    // Initialize the 2D vector to store the Pascal's Triangle
    // Each row will have 'i + 1' elements.
    std::vector<std::vector<int>> matrix(numRows);

    for (int i = 0; i < numRows; ++i)
    {
        // Resize the current row to have i + 1 elements
        matrix[i].resize(i + 1);

        // The first and last elements of each row are always 1
        matrix[i][0] = 1;         // First element
        matrix[i][i] = 1;         // Last element

        // Calculate the inner elements based on the previous row
        // This loop runs from the second element (index 1) up to the second-to-last element (index i-1)
        for (int j = 1; j < i; ++j)
        {
            // The current element is the sum of the two elements directly above it
            // in the previous row.
            matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
        }
    }
    return matrix;
}
int main()
{


    return 0;
}
