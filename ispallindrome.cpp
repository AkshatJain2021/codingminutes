#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
    int i=0,j=str.length()-1;
    while(j>i)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
        }
      else if(str[i]!=str[j])
      {
        return false;
      }
    }
    return true;
    
    
}