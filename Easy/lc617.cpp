/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  //Create a new tree for merge nodes
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1==NULL && t2==NULL)
        {
            return NULL;
        }
        else if(t1==NULL)
        {
            TreeNode* node = new TreeNode(t2->val);
            node->left=t2->left;
            node->right=t2->right;
            return node;
            
        }
        else if(t2==NULL)
        {
            TreeNode* node = new TreeNode(t1->val);
            node->left=t1->left;
            node->right=t1->right;
            return node;
            
        }
        else
        {
            TreeNode* node=new TreeNode(t1->val+t2->val);
            node->left=mergeTrees(t1->left,t2->left);
            node->right=mergeTrees(t1->right,t2->right);
            return node;
            
        }
        
    }

};
