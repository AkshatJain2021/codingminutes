#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(),length.end());
    int count=0;
 for(int i=0;i<length.size();i++)
 {
     for(int j=i+1;j<length.size();j++)
     {
         if(-length[i]+length[j]<=D and -length[i]+length[j]>0)
         {
             length[i]=INT_MIN;
             length[j]=INT_MIN;
             count++;
         }
         
     }
 }
 return count;
}