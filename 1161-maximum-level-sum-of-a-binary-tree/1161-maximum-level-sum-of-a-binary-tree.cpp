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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return 0;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int n = q.size();
            for(int i = 0;i<n;i++){
                TreeNode* x = q.front();
                q.pop();
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
                temp.push_back(x->val);
            }
            ans.push_back(temp);
        }
        int ret = INT_MIN;
        int a = 0;
        for(int i = 0;i<ans.size();i++){
            int sum = 0;
            for(int j = 0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
                sum += ans[i][j];
            }
            cout<<endl;
            if(sum>ret){
                ret = sum;
                a = i+1;
            }
        }
        return a;
    }
};