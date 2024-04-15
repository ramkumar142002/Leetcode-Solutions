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
    int sum = 0;
    void fun(TreeNode* root,int prev){
        if(root==NULL) return ;
        if(!root->left && !root->right){
            prev = (prev*10)+root->val ;
            sum += prev;
            return;
        }
        
        fun(root->left,(prev*10)+root->val);
        fun(root->right,(prev*10)+root->val);
    }
    int sumNumbers(TreeNode* root) {
        fun(root,0);
        return sum;
    }
};