#include <iostream>
#include<algorithm>
using namespace std;
void tripletsum(int arr[],int n, int k)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        int l=n-1;
        while(j<l){
        if(arr[i]+arr[j]+arr[l]==k)
        {
            cout<<arr[i]<<' '<<arr[j]<<' '<<arr[l]<<endl;
            j++;        //To find all possible outputs we need to perform 
            l--;       //incrementation and decrementation 
        }
        else if(arr[i]+arr[j]+arr[l]<k)
        {
            j++;
        }
        else if(arr[i]+arr[j]+arr[l]>k)
        {
            l--;
        }
    }
    }
}
int main()
{
    int arr[100],n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the desired sum"<<endl;
    cin>>k;
tripletsum(arr,n,k);
    return 0;
}
