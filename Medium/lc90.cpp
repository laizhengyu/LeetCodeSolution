class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int pos=0;
        vector<int> path;
        vector<vector<int>> result;
        result.push_back(path);
        sort(nums.begin(),nums.end());
        dfs(pos,path,nums,result);
        return result;
    }
private:
    void dfs(int pos,vector<int>& path,vector<int>& nums,vector<vector<int>>& result)
    {
        for (int i=pos;i<nums.size();i++)
        {
            //backtracking(by dfs)
            if(i>pos&&nums[i-1]==nums[i]) continue;
            path.push_back(nums[i]);//the case within nums[i]
            result.push_back(path);
            dfs(i+1,path,nums,result);
            path.pop_back();//the case without nums[i]
        }
        
    }
};
