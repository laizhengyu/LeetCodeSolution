class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=0;
        for (int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        if (S>sum || (sum+S)%2!=0) return 0;
        
        //S=subset_positive + subset_negative
        //sum=subset_positive - subset_negative
        //subset_positive = (sum+S)/2
        //to find how many positive subset sum to  (sum+S)/2
        // initial dp
        int pos = (sum+S)/2;
        int dp[pos+1]={0};
        dp[0]=1;
        
        
        //traceback from end,j-nums[i]>=0
        //dp[i] means the number of positive set sum to i
        
        for(int i=0;i<nums.size();i++)
        {
            for (int j=pos;j-nums[i]>=0;j--)
            {
                dp[j]+=dp[j-nums[i]];//(j-nums[i])+nums[i]=j,the ways of j contain the ways of j-nums[i]
            }
        }
      return dp[pos];
    }
};
