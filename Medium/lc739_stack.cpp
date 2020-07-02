class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        //递减栈
        stack<int> s;
        int n=T.size();
        vector<int> res(n,0);

        for (int i=0;i<n;i++)
        {
            if(i<n && s.empty())
            {
                s.push(i);
                continue;
            }
            if(T[s.top()]>T[i])
            {
                s.push(i);
            }
            while(!s.empty()&&T[s.top()]<T[i]){
                res[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};