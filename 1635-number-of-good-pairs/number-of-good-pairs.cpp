class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m; //SC O(n)
        int count=0;
        for(auto i:nums)
        {
        count = count + m[i];
        m[i]=m[i]+1;
        }
    return count;
}
};