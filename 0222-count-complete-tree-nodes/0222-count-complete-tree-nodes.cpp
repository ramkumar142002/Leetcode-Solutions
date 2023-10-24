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
    void fun(TreeNode* root,vector<int> &c){
        if(root==NULL) return;
        
        c.push_back(root->val);
        fun(root->left,c);
        fun(root->right,c);
    }
    int countNodes(TreeNode* root) {
        vector<int> c;
        fun(root,c);
        return c.size();
    }
};