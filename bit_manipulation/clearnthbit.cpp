#include <iostream>
using namespace std;
int clearbit(int &n,int i)
{
    int dummy=~(1<<i);
    n=n&dummy;
    return n;
}
int main()
{
    int n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the bit index to be cleared"<<endl;
    cin>>i;
    int output=clearbit(n,i);
cout<<"New nuber obtained after clearing nth bit is "<<' '<<output;
    return 0;
}
