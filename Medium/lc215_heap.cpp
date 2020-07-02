class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> temp;
        int res=0;
        for (int i=0;i<nums.size();i++)
        {
            temp.push(nums[i]);
        }
        int n=temp.size();//堆的大小会变，需要定义n
        for(int j=0;j<n;j++)
        {
            if(j==k-1)
            {
                res=temp.top();
                break;
            }
            temp.pop();
        }
        return res;
    }
};