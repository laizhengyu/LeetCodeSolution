class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        //Greedy and Finite State Machine
        //choose the max/min number in raise/down subsequence
        
        if (nums.size()<2) 
            return nums.size();
        
        int begin=2;
        int up=1;
        int down=-1;
        int max_len=1;
        int state=begin;
        for(int i=1;i<nums.size();i++)
        {
            //when nums[i-1]==nums[i] , no state transform happen
            switch(state)
            {
                case(2):
                    {
                        if (nums[i-1]>nums[i])
                        {
                            state = down;
                            max_len++;
                        }
                        else if (nums[i-1]<nums[i])
                        {
                            state = up;
                            max_len++;
                        }
                        break;
                    }
                case(1):
                    {
                        if (nums[i-1]>nums[i])
                        {
                            state = down;
                            max_len++;
                        }
                    }
                    break;
                case(-1):
                    {
                        if (nums[i-1]<nums[i])
                        {
                            state = up;
                            max_len++;
                        }
                        break;
                    }
                 default :
                    break;
            }
            
        }
        return max_len;
    }
};
