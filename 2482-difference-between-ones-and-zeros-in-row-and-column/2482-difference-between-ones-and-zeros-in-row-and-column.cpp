class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> row(grid.size(),0),column(grid[0].size(),0);
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                row[i]+= grid[i][j];
                column[j]+=grid[i][j];
            }
        }
        
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                grid[i][j] = row[i]+column[j]-(row.size()-row[i])-(column.size()-column[j]);
            }
        }
        return grid;
    }
};