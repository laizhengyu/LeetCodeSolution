//  https://blog.csdn.net/zhangxiangDavaid/article/details/37115355

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
    vector<int> inorderTraversal(TreeNode* root) {
        
        std::stack<TreeNode*> s;
        vector<int> result;
        if (!root) return result;
        TreeNode* p=root;
        while (!s.empty()||p)
        {
            while(p)
            {
                s.push(p);
                p=p->left;
                //左子树全部入栈，然后逐个遍历右子树
            }
            if (!s.empty())
            {
                p=s.top();
                result.push_back(p->val);
                s.pop();
                p=p->right;//对右子树的左子树进行操作
            }
        }
        return result;
    }
};
