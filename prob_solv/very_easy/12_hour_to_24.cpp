string timeConversion(string s) {
if(s[8]=='A')
{
    if(s[0]=='1' && s[1]=='2')
    {
        s[0]='0';
        s[1]='0';
        s.resize(8);
    }
     s.resize(8);
}
if(s[8]=='P')
{
    if(s[0]=='1'&& s[1]=='2')
    {
        s.resize(8);
    }
    if(s[0]=='0')
    { 
        int temp=s[1]-'0';
        int temp2=12+temp;   
        string hh=to_string(temp2);
        return hh+s.substr(2,6);
    }
    if(s[0]=='1' && s[1]=='1')
    {
        s[0]='2';
        s[1]='3';
        s.resize(8);
    }
    if(s[0]=='1' && s[1]=='0')
    {
        s[0]='2';
        s[1]='2';
        s.resize(8);
    }
}
return s;
}
