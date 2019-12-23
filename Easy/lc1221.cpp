//Runtime: 4 ms, faster than 58.81%
//Memory Usage: 8.4 MB, less than 100.00% 

class Solution {
public:
    int balancedStringSplit(string s) {
        int a[s.size()];
        
        for(int i=0;i<s.size();i++)
        {
            if (s[i]=='R') a[i]=1;
            else a[i]=-1;
        }
        int sum=0;
        int count=0;
        for(int j=0;j<s.size();j++)
        {
            sum+=a[j];
            if (sum==0) count++;
        }
        return count;
    }
};
