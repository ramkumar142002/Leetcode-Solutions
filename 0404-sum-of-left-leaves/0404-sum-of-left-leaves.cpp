/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fun(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left && root->left->left==NULL && root->left->right==NULL){
            cout<<root->val<<endl;
            return root->left->val + fun(root->left) + fun(root->right);
        }
        else return 0 + fun(root->left) + fun(root->right);
        return 0;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return fun(root);
    }
};