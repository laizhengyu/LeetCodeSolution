//Runtime: 120 ms, faster than 33.01%
//Memory Usage: 14.5 MB, less than 100.00% 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> res;
        
        for(int i=0;i<nums.size();i++)
        {
            if (i>0&&nums[i]==nums[i-1]) continue;
            int p=nums.size()-1;
            for(int j=i+1;j<p;)
            {
                if(nums[i]+nums[j]==-nums[p])
                {res.push_back({nums[i],nums[j],nums[p]});  
                    p--;j++;
                    while (j<p&&nums[j]==nums[j-1]) j++;
                    while (j<p&&nums[p]==nums[p+1]) p--;
                }
                
               else if(nums[i]+nums[j]>-nums[p]) 
                {
                    p--;
                    while (j<p&&nums[p]==nums[p+1]) p--;
                }
                else //(nums[i]+nums[j]<-nums[p]) 
                {
                    j++;
                    while (j<p&&nums[j]==nums[j-1]) j++;
                }
               
            }
          
        }
        return res;
    }
};
