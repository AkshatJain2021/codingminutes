
string superReducedString(string s) {
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i=-1;     //as i is getting incremented
        }
    }
    if(s.length())
    {
        return s;
    }
    else{
        return "Empty String";
    }
}