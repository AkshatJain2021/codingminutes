#include <iostream>
using namespace std;
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapindex=i;
        int minindex;
        int min=arr[i];
        for(int j=i+1;j<n;j++)
        {
           
             if(arr[j]<min)
            {
                min=arr[j];
                minindex=j;
            }
        }
        
         if(min!=arr[i])
        {
            swap(arr[minindex],arr[swapindex]);
        }
    }
}
int main()
{
    int n, arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}
