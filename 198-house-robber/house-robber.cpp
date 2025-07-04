class Solution {
public:
    int rob(vector<int>& nums,int i,vector<int>&dp) {
        if(i>=nums.size())return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(rob(nums,i+1,dp),rob(nums,i+2,dp)+nums[i]);
    }
    int rob(vector<int>& nums){
        vector<int>dp(nums.size(),-1);
        return rob(nums,0,dp);
    }
};