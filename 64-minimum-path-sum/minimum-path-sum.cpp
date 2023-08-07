class Solution {
public:
    int path(vector<vector<int>>& grid,int m,int n,vector<vector<int>> &dp){
        if(m==0 && n==0) return grid[m][n];
        if(m<0 || n<0) return 1e9;
        if(dp[m][n]!=-1) return dp[m][n];
        int left=grid[m][n]+path(grid,m,n-1,dp);
        int up=grid[m][n]+path(grid,m-1,n,dp);
        return dp[m][n]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return path(grid,m-1,n-1,dp);
    }
};