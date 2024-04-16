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
    void fun(TreeNode* root,int val,int cur,int depth){
        if(!root) return ;
        if(cur+1 == depth){
            // if(root->left){
                TreeNode* temp = root->left;
                TreeNode* present = new TreeNode;
                present->val = val;
                present->right = NULL;
                present->left = temp;
                root->left = present;
            // }
            // if(root->right){
                temp = root->right;
                present = new TreeNode;
                present->val = val;
                present->left = NULL;
                present->right = temp;
                root->right = present;
            // }
        }
        fun(root->left,val,cur+1,depth);
        fun(root->right,val,cur+1,depth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* present = new TreeNode(val);
            present->right = NULL;
            present->left = root;
            return present;
        }
        fun(root,val,1,depth);
        return root;
    }
};