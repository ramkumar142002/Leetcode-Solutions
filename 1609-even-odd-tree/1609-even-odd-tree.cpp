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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*> q;
        q.push(root);
        int c = 0;
        while(!q.empty()){
            int x = q.size();
            int prev = -1;
            
            for(int i = 0;i<x;i++){
                TreeNode* temp = q.front();
                if(c%2==0){
                    if(temp->val%2==0 || (prev!=-1 && prev>=temp->val)) return false;
                }
                else if(temp->val%2!=0 || (prev!=-1 && prev<=temp->val)) return false;
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                prev = temp->val;
            }
            c++;
        }
        return true;
    }
    
};