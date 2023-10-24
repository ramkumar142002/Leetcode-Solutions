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
    void preorder(TreeNode* root,vector<int> &arr){
        if(root==NULL) return;
        
        arr.push_back(root->val);
        preorder(root->left,arr);
        preorder(root->right,arr);
    }
//     TreeNode* ll(TreeNode* root,vector<int> &arr){
        
//     }
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        vector<int> arr;
        preorder(root,arr);
        
        // ll(root,arr);
        root->val = arr[0];
        for(int i=1;i<arr.size();i++){
            root->right = new TreeNode(arr[i]);
            root->left = NULL;
            root= root->right;
        }
    }
};