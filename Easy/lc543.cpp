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
    int diameterOfBinaryTree(TreeNode* root) {
        int path;
        path=longestpath(root,0);
        return longest;
    }
    int longestpath(TreeNode* root,int depth){
        int leftdepth,rightdepth;
        if(root==NULL) return 0;
        else{
            leftdepth=longestpath(root->left,depth);
            rightdepth=longestpath(root->right,depth);
            depth=max(leftdepth,rightdepth);
            longest=max(longest,leftdepth+rightdepth);
            return depth+1;
        }
    }
private:
    int longest;
    
};
