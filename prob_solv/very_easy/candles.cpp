int birthdayCakeCandles(vector<int> candles) {
    int max=INT_MIN;
    for(int i=0;i<candles.size();i++)
    {
        if(candles[i]>max)
        {
            max=candles[i];
        }
    }
    int count=0;
    for(int i=0;i<candles.size();i++)
    {
        if(candles[i]==max)
        {
            count++;
        }
    }
return count;
}