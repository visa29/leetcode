class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
    int n=t.size();
     stack<int>s;
     vector<int>res(n,0);
     for(int i=0;i<n;i++)
     {
        while(!s.empty()&& t[i]>t[s.top()])
        {
            int prev = s.top();
            s.pop();
            res[prev]=i-prev;
        }
        s.push(i);
     }   
     return res;
    }    
};