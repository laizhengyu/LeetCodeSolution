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
    void flatten(TreeNode* root) {
    while(root!=NULL)
    {
        if (root->left==NULL)
        {
            root=root->right;
        }
        else{
            //左边的最右节点
            TreeNode *pre ;
            pre = root->left;
            while(pre->right!=NULL)
            {
                pre=pre->right;
            }
            pre->right=root->right;
            root->right=root->left;
            root->left=NULL;
            root=root->right;
        }
    }
    }
};
