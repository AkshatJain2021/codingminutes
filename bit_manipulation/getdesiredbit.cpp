#include <iostream>
using namespace std;
int getbit(int n,int bit)
{
    int dummy=(1<<bit);
    if(dummy&n)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n,bit;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the desired bit to be addressed"<<endl;
    cin>>bit;
    cout<<getbit(n,bit);

    return 0;
}
