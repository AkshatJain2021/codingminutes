#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==Val)
        {
            return A[i];
        }
    }
     for(int i=0;i<A.size();i++)
    {
    if(Val-1==A[i])
    {
        return A[i];
    }
}
return -1;
}