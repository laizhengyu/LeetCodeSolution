class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<int> item;
        vector<vector<int>> result;
        result.push_back(item);
        gen(i,nums,item,result);
        return result;
    }
private:
    void gen(int i, vector<int>& nums, vector<int>& item,vector<vector<int>>& result)
    {
        //backtracking (programmign by recursion)
        //the item will be choosen or not,tracking its result
        if (i>=nums.size())
        {
            return;
        }
        item.push_back(nums[i]);
        result.push_back(item);
        
        gen(i+1,nums,item,result);//choose nums[i]
        item.pop_back();
        gen(i+1,nums,item,result);//not choose nums[i]
    }
    
};
