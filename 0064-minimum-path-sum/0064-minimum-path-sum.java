class Solution {
    public int minPathSum(int[][] grid) {
        int[][] dp = new int[grid.length][grid[0].length];
        for(int[] a:dp){
            Arrays.fill(a,0);
        }
        // return fun(grid,grid.length-1,grid[0].length-1,dp);
        
        for(int row = 0;row<grid.length;row++){
            for(int col = 0;col<grid[0].length;col++){
                if(row==0 && col==0) dp[row][col] = grid[0][0];
                else{
                    int left = 1000000009,up = 1000000009;
                    if(col>0) left = grid[row][col] + dp[row][col-1];
                    if(row>0) up = grid[row][col] + dp[row-1][col];
                    
                    dp[row][col] = Math.min(left,up);
                }
            }
        }
        return dp[grid.length-1][grid[0].length-1];
    }
    public int fun(int[][] grid,int row,int col,int[][] dp){
        if(row ==0 && col ==0) return grid[0][0];
        if(row<0 || col<0) return 1000000009;
        
        if(dp[row][col]!=-1) return dp[row][col];
        int left = grid[row][col] + fun(grid,row,col-1,dp);
        int up = grid[row][col] + fun(grid,row-1,col,dp);
        
        return dp[row][col] = Math.min(left,up);
    }
}