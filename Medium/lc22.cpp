class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string item;
        gen(n,n,item,result);
        return result;
    }
private:
   void gen(int left,int right,string item,vector<string>& result)
    {
        if (right==0&&left==0)
        {
            result.push_back(item);
            return;
        }
        //backtracking 每次将（减少一个，从而开头（都考虑完，并且当这个if过了之后是本次对）的回溯，进入gen
        //是选择了（，过了if 就开始加），形成回溯
        if (left>0)
        {
            gen(left-1,right,item+'(',result);
        }
        //backtracking
        if(right > left)
        {
            gen(left,right-1,item+')',result);
        }
    }
};
