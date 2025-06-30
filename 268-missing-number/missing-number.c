int missingNumber(int* nums, int n) {
    int total= (n*(n+1))/2,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
    }
    return total-sum;

    
}