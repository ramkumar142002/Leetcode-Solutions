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
    void inorder(TreeNode* root,vector<int> &v){
        if(root==NULL) return;
        
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* fun(vector<int> &v,int begin,int end){
        if(begin>end) return NULL;
        
        int mid=(begin+end)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left=fun(v,begin,mid-1);
        root->right = fun(v,mid+1,end);
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        vector<int> v;
        inorder(root,v);
        v.push_back(val);
        sort(v.begin(),v.end());
        
        return fun(v,0,v.size()-1);
    }
};