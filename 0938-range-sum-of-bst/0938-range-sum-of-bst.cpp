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
    //int x=0;
    int sum(TreeNode* root,int low,int high){
        if(root==NULL) return 0;
        if(root->val >= low && root->val <=high) {

            return root->val+sum(root->left,low,high)+sum(root->right,low,high);
        }

        return sum(root->left,low,high)+sum(root->right,low,high);
        //return x;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        //if(root->val >= low && root->val <=high) x=x+root->val;
       return sum(root,low,high);
        //sum(root->right,low,high);
       // return x;
    }
};