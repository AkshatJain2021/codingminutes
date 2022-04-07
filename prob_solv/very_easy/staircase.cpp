void staircase(int n) {
for(int i=1;i<=n;i++)
{
    int j;
    for(j=n;j>i;j--)
    {
        cout<<' ';
    }
    while(j>0)
    {
        cout<<'#';
        j--;
    }
    cout<<endl;
}
}