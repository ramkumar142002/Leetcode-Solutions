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
    int findBottomLeftValue(TreeNode* root) {

        queue<TreeNode*> q;
        if(root==NULL) return -1;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            vector<int> temp;
            int x = q.size();
            for(int i = 0;i<x;i++){
                TreeNode* a = q.front();
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
                temp.push_back(a->val);
                q.pop();
            }
            ans.push_back(temp);
        }
        for(int i = 0;i<ans.size();i++){
            for(int j = 0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans[ans.size()-1][0];
    }
};