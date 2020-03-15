/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //slowly 
class Solution {
public:
    int rob(TreeNode* root) {
        if (root==NULL) return 0;
        vector<int> res(0,2);
        res=sub(root);
        return max(res[0],res[1]);
        
    }    
private:

    vector<int> sub(TreeNode* root)
    {
        //0 not steal , 1 steal
        //DP
        vector<int> res;
        if (root==NULL) 
        {   
            res.push_back(0);
            res.push_back(0);
            return res;
        }
        vector<int> L,R;
        L=sub( root->left);
        R=sub(root->right);
        // res[0]=max(L[0],L[1])+max(R[0],R[1]);
        // res[1]=root->val+L[0]+R[0];
        res.push_back(max(L[0],L[1])+max(R[0],R[1]));
        res.push_back(root->val+L[0]+R[0]);
        
        return res;
        
    }
//faster
class Solution {
public:
    int tryRob(TreeNode* root, int& l, int& r) {
        if (!root)
            return 0;
            
        int ll = 0, lr = 0, rl = 0, rr = 0;
        l = tryRob(root->left, ll, lr);
        r = tryRob(root->right, rl, rr);
        
        return max(root->val + ll + lr + rl + rr, l + r);
    }

    int rob(TreeNode* root) {
        int l, r;
        return tryRob(root, l, r);
    }
};
    
    
//Time limit exceeded    
// private:
//     int Traversal(TreeNode* root , int flag)
//     {
//         if (root == NULL) return 0;  
//         if (flag==1)
//            return max(root->val+Traversal(root->left,0)+Traversal(root->right,0),Traversal(root->left,1)+Traversal(root->right,1));
//         else
//             return Traversal(root->left,1)+Traversal(root->right,1);
//    }
};
