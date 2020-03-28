class Solution {
public:
    string longestPalindrome(string s) {
        //dp[j][i]= dp[j+1][i-1] , if s[i]==s[j]
        //           0,            if s[i]!=s[j]
        //如果(j,i)是回文，那么(j-1,i+1)去掉s[i]，s[j]时也是
        //PS:DP不是最快的方案
        if (s.empty()) return s;
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,0));    
        int left=0;
        int max_len=1;
       // for (int k=0;k<n;k++) dp[k][k]=1;
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i-j<2) 
                    dp[j][i]=(s[i]==s[j]);
                else  //if(i-j>=2)
                {
                    dp[j][i]=dp[j+1][i-1]&&(s[i]==s[j]); 
                }

                if (dp[j][i]&&max_len<i-j+1)
                    {
                        left=j;
                        max_len=i-j+1;
                        cout<<i<<" "<<j<<" "<<max_len;
                    }
            }
            
        }
        return s.substr(left,max_len);
        
    }
};
