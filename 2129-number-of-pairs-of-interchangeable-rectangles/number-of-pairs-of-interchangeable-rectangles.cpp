class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) {
    unordered_map<double,int>m;
    long long pairs=0;
    for(auto i : r )
    {
        double ratio = (double)i[0]/i[1];
        pairs=pairs+m[ratio];
        m[ratio]=m[ratio]+1;

    }
    return pairs;
    }
};