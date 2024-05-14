class Solution {
    public int fun(int[][] grid,int i,int j){
        if(i<0 || i>grid.length || j<0 || j>grid[i].length || grid[i][j]==0) return 0;
        int left = 0,right = 0,down = 0,up = 0;
        int cur = grid[i][j];
        if(i-1 >= 0){
            grid[i][j] = 0;
            up = cur + fun(grid,i-1,j);
            grid[i][j] = cur;
        }
        if(i+1 < grid.length){
            grid[i][j] = 0;
            down = cur + fun(grid,i+1,j);
            grid[i][j] = cur;
        }
        if(j-1 >= 0){
            grid[i][j] = 0;
            left = cur + fun(grid,i,j-1);
            grid[i][j] = cur;
        }
        if(j+1 < grid[i].length){
            grid[i][j] = 0;
            right = cur + fun(grid,i,j+1);
            grid[i][j] = cur;
        }
        return Math.max(left,Math.max(right,Math.max(up,down)));
    }
    public int getMaximumGold(int[][] grid) {
        int ans = 0;
        for(int i = 0;i<grid.length;i++){
            for(int j = 0;j<grid[i].length;j++){
                ans = Math.max(ans,fun(grid,i,j));
            }
        }
        return ans;
    }
}