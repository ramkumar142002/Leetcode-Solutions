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
        // vector<vector<int>> dp(m+1,vector<int> (n+1,0));
        // if(word1==word2) return 0;
        // return fun(word1,word2,m,n,dp);
        vector<int> prev(n+1,0),cur(n+1,0);
        
        // for(int i=0;i<n+1;i++) prev[i]=i;
        // for(int i=0;i<m+1;i++) dp[i][0]=i;

        for(int i=0;i<n+1;i++) prev[i]=i;

        for(int i=1;i<m+1;i++){
            cur[0]=i;
            for(int j=1;j<n+1;j++){
                if(word1[i-1]==word2[j-1]) cur[j]=0+prev[j-1];
                else cur[j]=1+min(cur[j-1],min(prev[j-1],prev[j]));
            }
            prev=cur;
        }
        return prev[n];
    }
};