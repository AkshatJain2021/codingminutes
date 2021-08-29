#include <iostream>
using namespace std;
int setbit(int &n,int i)
{
    int dummy=(1<<i);
    n=n|dummy;
    return n;
}
int main()
{
    int n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the index at which change is to be made"<<endl;
    cin>>i;
    int output=setbit(n,i);
    cout<<"The new number formed after setbit is"<<' '<<output;

    return 0;
}
