class Solution {
public:
    int minInsertions(string s) {
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
        // total size-longestpalindromeicsubsequence
        return s.size()-dp[s.size()][r.size()];
    }
};