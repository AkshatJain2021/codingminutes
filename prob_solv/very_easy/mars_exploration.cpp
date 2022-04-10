int marsExploration(string s) {
int count=0;
for(int i=0;s[i]!='\0';i++)
{
    if(s[0]!='S')
    {
        count=count+1;
    }
    if(s[1]!='O' && s[1]!='\0')
    {
        count=count+1;
    }
    if(s[2]!='S' && s[2]!='\0')
    {
        count=count+1;
    }
    s.erase(i,3);
    i=-1;
}
return count;
}