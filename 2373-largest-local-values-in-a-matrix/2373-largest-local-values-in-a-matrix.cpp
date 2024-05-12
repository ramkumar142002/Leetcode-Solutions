class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size()-2,vector<int> (grid.size()-2,0));
        for(int i = 0;i<grid.size()-2;i++){
            for(int j = 0;j<grid.size()-2;j++){
                for(int ii = i;ii<i+3;ii++){
                    for(int jj = j;jj<j+3;jj++){
                        ans[i][j] = max(ans[i][j],grid[ii][jj]);
                    }
                }
            }
        }
        return ans;
    }
};