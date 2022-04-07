vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice=0;
    int bob=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            alice=alice+1;
        }
        else if(b[i]>a[i])
        {
            bob=bob+1;
        }
    }
    vector<int>v;
    v.push_back(alice);
    v.push_back(bob);
    return v;

}
