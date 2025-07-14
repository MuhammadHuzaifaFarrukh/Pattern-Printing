#include<iostream>

using namespace std;

int validateint_fullwithrangealso(int n)
{
    using namespace std;

    char ch;

    while (1)
    {
        //cout << "Enter an integer : ";
        if (cin >> n)
        {
            // Check if there's leftover input (like a decimal point)
            if (cin.get(ch) && ch != '\n')
            {
                cout << "Invalid Input. Please enter a valid integer again.\n";
                cin.clear();  // Clear error flags
                while (cin.get() != '\n');  // Flush input buffer
            }
            else
            {
                if(n>0)
              {
                  return n;
              }
              else
              {
                  cout<<"Size cannot be less than 1"<<endl;
              }
            }
        }
        else
        {
            cout << "Invalid Input. Please enter a valid integer again.\n";
            cin.clear();  // Clear error state
            while (cin.get() != '\n');  // Flush input buffer
        }
    }
}
int validateint_full(int n)
{
    using namespace std;

    char ch;

    while (1)
    {
        //cout << "Enter an integer : ";
        if (cin >> n)
        {
            // Check if there's leftover input (like a decimal point)
            if (cin.get(ch) && ch != '\n')
            {
                cout << "Invalid Input. Please enter a valid integer again.\n";
                cin.clear();  // Clear error flags
                while (cin.get() != '\n');  // Flush input buffer
            }
            else
            {
                return n;  // Valid integer input
            }
        }
        else
        {
            cout << "Invalid Input. Please enter a valid integer again.\n";
            cin.clear();  // Clear error state
            while (cin.get() != '\n');  // Flush input buffer
        }
    }
}

void allocate(int **arr , int rows , int columns)
{
    for(int i =0;i<rows ; i++)
    {
        arr[i] = new int[columns];
        for(int j = 0 ; j<columns ; j++)
        {
            cout<<"Enter the element ["<<i<<"]["<<j<<"] : ";
            arr[i][j] = validateint_full(arr[i][j]);
        }
    }
}
int main()
{
    int m,n;
    cout<<"Enter the number of rows : ";
    m = validateint_fullwithrangealso(m);
    cout<<"Enter the number of columns : ";
    n = validateint_fullwithrangealso(n);
    int **arr = new int*[m];

   allocate(arr ,m , n);

    int minr = 0 , maxr = m-1 , minc = 0 ;

    int count = 0;


    while(count < n*m)
    {
        for (int i = minr  ; i<=maxr && count<m*n ; i++ )
        {
            cout<<arr[i][minc]<<" ";
            count++;
        }

        minc++;

        for (int i = maxr  ; i>=minr  && count<m*n ; i-- )
        {
            cout<<arr[i][minc]<<" ";
            count++;
        }

        minc++;

    }


    for(int i = 0 ; i<m ; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;


    return 0;
}
