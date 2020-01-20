class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if (root==NULL) return 0;
        else
        {
        sumval(root,sum);
        pathSum(root->left,sum);
        pathSum(root->right,sum);
        }
         return count;
  }
    int  sumval(TreeNode* root,int target)
    {
       int temp=0;
       if (root!=NULL) temp=temp+root->val;
       else return 0; 
       if (temp==target) count++;
         sumval(root->left,target-root->val);
         sumval(root->right,target-root->val);
        return 0;
    }   
private:
    int count=0;
};
