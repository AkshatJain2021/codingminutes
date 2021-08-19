#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int maxelement=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>maxelement)
        {
            maxelement=arr[i];
        }
    }
    
    return maxelement;
    
     
}