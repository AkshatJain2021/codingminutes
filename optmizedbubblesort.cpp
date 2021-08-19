#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    // your code  goes here
    bool issorted=0;
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=0;j<v.size()-1-i;j++)
        {
            if (v[j]<v[j+1])
            {
                issorted=1;
                continue;
            }
            
            else 
            {
                issorted=0;
                swap(v[j],v[j+1]);
            }
        }
        if(issorted)
        {
            return v;
        }
    }
    return v;
}