#include <iostream>

using namespace std;



void zig_zag_preinpost(int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        cout<<n<<" ";
        preinpost(n-1);
        cout<<n<<" ";
        preinpost(n-1);
        cout<<n<<" ";
        return;
    }
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    zig_zag_preinpost(n);
    cout<<endl;

    return 0;
}
