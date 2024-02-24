class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> ans = matrix;
        vector<int> temp(matrix[0].begin(),matrix[0].end());
        for(int i = 0;i<matrix[0].size();i++){
            int maxi = matrix[0][i];
            for(int j = 0;j<matrix.size();j++){
                maxi = max(maxi,matrix[j][i]);
            }
            for(int j = 0;j<matrix.size();j++){
                if(ans[j][i] == -1) ans[j][i] = maxi;
            }
        }
        // for(int i = 0;i<matrix.size();i++){
        //     for(int j = 0;j<matrix[i].size();j++){
        //         if(ans[j][i] == -1) ans[j][i] = temp[i];
        //     }
        // }
        return ans;
    }
};