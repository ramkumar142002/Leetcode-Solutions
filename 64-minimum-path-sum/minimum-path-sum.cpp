class Solution {
public:
    // int path(vector<vector<int>>& grid,int m,int n,vector<vector<int>> &dp){
    //     if(m==0 && n==0) return grid[m][n];
    //     if(m<0 || n<0) return 1e9;
    //     if(dp[m][n]!=-1) return dp[m][n];
    //     int left=grid[m][n]+path(grid,m,n-1,dp);
    //     int up=grid[m][n]+path(grid,m-1,n,dp);
    //     return dp[m][n]=min(up,left);
    // }
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,0));
        // return path(grid,m-1,n-1,dp);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[i][j]=grid[0][0];
                else{
                int left=grid[i][j];
                if(j>0) left=left+dp[i][j-1];
                else left=left+1e9;

                int up=grid[i][j];
                if(i>0) up=up+dp[i-1][j];
                else up=up+1e9;

                dp[i][j]=min(up,left);
                }
            }
        }
        return dp[m-1][n-1];
    }
};