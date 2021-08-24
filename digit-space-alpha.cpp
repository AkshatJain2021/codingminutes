#include <iostream>
using namespace std;

int main()
{
    int alpha=0,digit=0,space=0;
    char ch=cin.get();
    while(ch!='\n')
    {
        if(ch>='0' and ch<='9')
        {
            digit++;
        }
        else if(ch>='a' and ch<='z' or ch>='A' and ch<='Z')
        {
            alpha++;
        }
        else if(ch==' ')
        {
            space++;
        }
        ch=cin.get();
    }
    cout<<"No of alphabets are"<<' '<<alpha<<endl;
    cout<<"No of spaces are"<<' '<<space<<endl;
    cout<<"No of digits are"<<' '<<digit<<endl;

    return 0;
}
