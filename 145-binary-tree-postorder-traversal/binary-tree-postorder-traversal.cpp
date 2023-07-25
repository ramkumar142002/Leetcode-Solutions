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
    vector<int> a;
    void through(TreeNode* root){
        if(root!=NULL){
            through(root->left);
            through(root->right);
            a.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        through(root);
        return a;
    }
};