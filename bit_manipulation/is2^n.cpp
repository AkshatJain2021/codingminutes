#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n&(n-1))
    {
        cout<<"Not a power of 2";
    }
    else
    cout<<"Is a power of 2";
    return 0;
}
