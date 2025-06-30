int maxProfit(int* prices, int n) {
    int maxprofit = 0, minbuyprice=prices[0];
    for(int i=1;i<n;i++)
    {
        minbuyprice=fmin(minbuyprice,prices[i]);
        maxprofit=fmax(maxprofit,prices[i]-minbuyprice);
    }
    return maxprofit; 
}