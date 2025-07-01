class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n= nums.size();
        for(auto i : nums)
        {
            m[i]=m[i]+1;
            for(auto i :m)
            {
            if(i.second>n/2)
            return i.first;
            }
        }
        return 0;
    }
};