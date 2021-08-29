#include <iostream>
#include<algorithm>
using namespace std;
void sum(int arr[],int n,int k)
{
   sort(arr,arr+n);
   int i=0,j=n-1;
   while(j>i)
   {
       if(arr[i]+arr[j]==k)
       {
           cout<<arr[i]<<' '<<arr[j];
           return;
       }
       else if(arr[i]+arr[j]>k)
       {
           j--;
       }
       else if(arr[i]+arr[j]<k)
       {
           i++;
       }
   }
   cout<<"No possible pairs found";
}
int main()
{
    int arr[100],n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the desired sum";
    cin>>k;
    sum(arr,n,k);
}

 
