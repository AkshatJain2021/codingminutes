#include <iostream>
using namespace std;
int clear_bit(int &n,int i)
{
    int dummy=(-1<<i);
    n=n&dummy;
    return n;
}
int main()
{
    int n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"enter the ith range to be cleared"<<endl;
    cin>>i;
    int output=clear_bit(n,i);
    cout<<"New number formed after clearing bits is"<<" "<<output;

    return 0;
}
