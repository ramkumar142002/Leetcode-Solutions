class Solution {
public:
    // int uni(int i,int j,vector<vector<int>> &dp){
    //     if(i==0 && j==0) return 1;
    //     if(i<0 || j<0) return 0;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int left=uni(i,j-1,dp);
    //     int up=uni(i-1,j,dp);
    //     return dp[i][j]=left+up;
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        // return uni(m-1,n-1,dp);
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[0][0]=1;
                else{
                    int up=0,left=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=left+up;
                }
            }
        }
        return dp[m-1][n-1];
    }
};