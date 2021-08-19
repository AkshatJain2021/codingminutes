#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    for(int i=0;i<k;i++)
    {
        int temp=a[a.size()-1];
        for(int j=a.size()-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    return a;
}