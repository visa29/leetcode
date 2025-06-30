int maxSubArray(int* nums, int n) {
    int maxsum=nums[0],sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
        if(sum>maxsum)
        maxsum=sum;
        if(sum<0)sum=0;
    }
    return maxsum;
}
