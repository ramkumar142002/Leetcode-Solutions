class Solution {
public:
    int fun(int n,int m,string s,string r,vector<vector<int>> &dp){
        if(n==0 || m==0) return 0;

        if(dp[n][m]!=-1) return dp[n][m];
        if(s[n-1]==r[m-1]) return dp[n][m]=1+fun(n-1,m-1,s,r,dp);
        return dp[n][m]=max(fun(n-1,m,s,r,dp),fun(n,m-1,s,r,dp));
    }
    int longestPalindromeSubseq(string s) {
        string r=s;
        reverse(r.begin(),r.end());
        vector<vector<int>> dp(s.size()+1,vector<int> (r.size()+1,0));
        // return fun(s.size(),r.size(),s,r,dp);
        for(int i=1;i<s.size()+1;i++){
            for(int j=1;j<r.size()+1;j++){
                if(s[i-1]==r[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[s.size()][r.size()];
    }
};