class Solution {
    int mod = 1e9+7;
public:
    long long fun(int m, int n, int maxMove, int i, int j,vector<vector<vector<int>>> &dp){
        if(maxMove == -1) return 0;
        if(i==m || j==n || i==-1 || j==-1) return 1;
        if(dp[i][j][maxMove]!=-1) return dp[i][j][maxMove]%mod;
        
        return dp[i][j][maxMove] = (fun(m,n,maxMove-1,i+1,j,dp)%mod+fun(m,n,maxMove-1,i,j+1,dp)%mod+
            fun(m,n,maxMove-1,i-1,j,dp)%mod+fun(m,n,maxMove-1,i,j-1,dp)%mod)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>> (n+1,vector<int>(maxMove+1,-1)));
        return fun(m,n,maxMove,startRow,startColumn,dp)%mod;
    }
};
