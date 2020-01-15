//Runtime: 120 ms, faster than 45.40% of C++ online submissions 
//Memory Usage: 16 MB, less than 10.00% of C++ online submissions 

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> temp(nums.size(),0);       
        vector<int> disappeared;  
        for (int i=0;i<nums.size();i++)
        {
            int j=nums[i]-1;
            temp[j]=nums[i];
        }
        for(int i=0;i<temp.size();i++)
        {
            if (temp[i]==0) disappeared.push_back(i+1);
        }
        return disappeared;
    }
};

//Runtime: 116 ms, faster than 72.56% 
//Memory Usage: 14.9 MB, less than 80.00%
class Solution {
public:
 vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int j=abs(nums[i])-1;
            nums[j]=(abs(nums[j])*-1);         
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                v.push_back(i+1);
            }
        }
        return v;
            }
};
