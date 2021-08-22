#include<bits/stdc++.h>
using namespace std;
//true->ascending

        bool compare(int a, int b){
           
           return a>b;
        }

vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    int size=a.size();
    if(flag){
        sort(a.begin(),a.end());
    }
    else {
        sort(a.begin(),a.end(),compare);
    }
    return a;
}