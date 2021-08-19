#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int temp1,temp2;
    int cursum=0,maxsum=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]<=x)
            {
                cursum=arr[i]+arr[j];
                if(cursum>maxsum)
                {
                    maxsum=cursum;
                    temp1=arr[i];
                    temp2=arr[j];
                }
            }
        }
    }
    return make_pair(temp1,temp2);
    
     
}