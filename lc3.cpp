class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid;
        while(left<=right)
        {
            mid=(right-left)/2+left;
            if (nums[mid]==target) return mid;
            if (nums[mid]<nums[right]) //nums is ordered from mid to right
            {
                if (nums[mid]<target && nums[right]>=target) left=mid+1;
                else right=mid-1;
            }
             else //nums is ordered from left to mid
            {
                if (nums[mid]>target && nums[left]<=target) right=mid-1;
                else left=mid+1;
            }
        }
        return -1;
    }
};
// "if if" is different from "if else"
