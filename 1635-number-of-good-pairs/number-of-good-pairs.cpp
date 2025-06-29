class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m; //SC O(n)
        for(auto i:nums)
        m[i]=m[i]+1;
        int count = 0;
        for(auto i:m)
        {
            int k=i.second;
            count = count + ((k*(k-1))/2);
        }
    return count;
}
};