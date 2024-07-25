class Solution {
    public int uniquePaths(int m, int n) {
        int[][] dp = new int[m][n];
        for(int[] a : dp){
            Arrays.fill(a,0);
        }
        // return fun(m-1,n-1,dp);
        dp[0][0] = 1;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i==0 && j==0)  dp[0][0] = 1;
                else{
                    int up = 0,left = 0;
                    if(i>0) up = dp[i-1][j];
                    if(j>0) left = dp[i][j-1];
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1];
    }
    public int fun(int m,int n,int[][] dp){
        if(m == 0 && n==0) return 1;
        if(m<0 || n<0) return 0;
        
        if(dp[m][n]!=-1) return dp[m][n];
        int up = fun(m-1,n,dp);
        int left = fun(m,n-1,dp);
        
        return dp[m][n] = up+left;
    }
}