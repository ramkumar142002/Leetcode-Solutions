class Solution {
public:
    int fun(string word1, string word2,int i,int j,vector<vector<int>> &dp){
        if(i==0) return j;
        if(j==0) return i;

        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i-1]==word2[j-1]) return dp[i][j]= 0+fun(word1,word2,i-1,j-1,dp);
        int insert=1+fun(word1,word2,i,j-1,dp);
        int replace=1+fun(word1,word2,i-1,j-1,dp);
        int remove=1+fun(word1,word2,i-1,j,dp);

        return dp[i][j]=min(insert,min(replace,remove));
    }
    int minDistance(string word1, string word2) {
        int m=word1.size(),n=word2.size();
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        if(word1==word2) return 0;
        return fun(word1,word2,m,n,dp);
    }
};