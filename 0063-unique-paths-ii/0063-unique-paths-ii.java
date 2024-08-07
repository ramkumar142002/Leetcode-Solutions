class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int[][] dp = new int[obstacleGrid.length][obstacleGrid[0].length];
        for(int[] a : dp){
            Arrays.fill(a,0);
        }
        // return fun(obstacleGrid,obstacleGrid.length-1,obstacleGrid[0].length-1,dp);
        for(int row = 0;row<obstacleGrid.length;row++){
            for(int col = 0;col<obstacleGrid[0].length;col++){
                if(obstacleGrid[row][col]==1) dp[row][col] = 0;
                else if(row==0 && col==0) dp[row][col] = 1;
                else{
                    int left = 0,up = 0;
                    if(col>0) left = dp[row][col-1];
                    if(row>0) up = dp[row-1][col];
                    dp[row][col] = left+up;
                }
            }
        }
        return dp[obstacleGrid.length-1][obstacleGrid[0].length-1];
    }
    public int fun(int[][] obstacleGrid,int row,int col,int[][] dp){
        if(row >= 0 && col>=0 && obstacleGrid[row][col]==1) return 0;
        if(row == 0 && col==0) return 1;
        if(row<0 || col<0) return 0;
        
        if(dp[row][col] != -1) return dp[row][col];
        int left = fun(obstacleGrid,row,col-1,dp);
        int up = fun(obstacleGrid,row-1,col,dp);
        return dp[row][col] = left+up;
    }
}