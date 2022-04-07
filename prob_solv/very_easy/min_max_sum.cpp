void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long minsum=0;
    long maxsum=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        minsum=minsum+arr[i];
    }
    for(int i=1;i<arr.size();i++)
    {
        maxsum=maxsum+arr[i];
    }
    cout<<minsum<<' '<<maxsum;
}
