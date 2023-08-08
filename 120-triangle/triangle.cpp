class Solution {
public:
    // int f(vector<vector<int>>& triangle,int i,int j,int n,vector<vector<int>> &dp){
    //     if( i== n-1) return triangle[i][j];
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int d = triangle[i][j]+f(triangle,i+1,j,n,dp);
    //     int r = triangle[i][j]+f(triangle,i+1,j+1,n,dp);
    //     return dp[i][j]=min(d,r);
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        // return f(triangle,0,0,n,dp);
        for(int i=0;i<n;i++) dp[n-1][i]=triangle[n-1][i];
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int d=triangle[i][j]+dp[i+1][j];
                int r=triangle[i][j]+dp[i+1][j+1];
                dp[i][j]=min(d,r);
            }
        }
        return dp[0][0];
    }
};