void plusMinus(vector<int> arr) {
float count=0;
int positive =0;
int negative=0;
int neutral=0;
for(int i=0;i<arr.size();i++)
{
    if(arr[i]>0)
    {
        positive=positive+1;
    }
    else if(arr[i]<0)
    {
        negative=negative+1;
    }
    else{
        neutral=neutral+1;
    }
    
    count=count+1;;
}
cout<<positive/count<<endl<<negative/count<<endl<<neutral/count<<endl;
}
