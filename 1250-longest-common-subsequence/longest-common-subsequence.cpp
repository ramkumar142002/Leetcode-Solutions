class Solution {
public:
    // int fun(int i1,int i2,string text1,string text2,vector<vector<int>> &dp){
    //     if(i1==0 || i2==0) return 0;

    //     if(dp[i1][i2]!=-1) return dp[i1][i2];
    //     if(text1[i1-1]==text2[i2-1]) return dp[i1][i2]=1+fun(i1-1,i2-1,text1,text2,dp);
    //     return dp[i1][i2]=max(fun(i1-1,i2,text1,text2,dp),fun(i1,i2-1,text1,text2,dp));
    // }
    int longestCommonSubsequence(string text1, string text2) {
        int l1=text1.size(),l2=text2.size();
        vector<vector<int>> dp(l1+1,vector<int> (l2+1,0));
        // return fun(l1,l2,text1,text2,dp);
        for(int i=0;i<l2+1;i++) dp[0][i]=0;
        for(int j=0;j<l1+1;j++) dp[j][0]=0;

        for(int i=1;i<l1+1;i++){
            for(int j=1;j<l2+1;j++){
                if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[l1][l2];
    }
};