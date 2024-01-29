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
    void fun(TreeNode* root,int &c,int max){
        if(root==NULL) return;
        if(root->val >= max){
            max = root->val;
            c++;
        }
        
        fun(root->left,c,max);
        fun(root->right,c,max);
    }
public:
    int goodNodes(TreeNode* root) {
        int c = 0;
        fun(root,c,root->val);
        return c;
    }
};