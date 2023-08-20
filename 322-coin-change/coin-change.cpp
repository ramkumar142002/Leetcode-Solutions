class Solution {
public:
    int fun(int n,vector<int>& coins, int amount,vector<vector<int>> &dp){
        if(n==0){
            if(amount%coins[0]==0) return amount/coins[n];
            else return 1e8;
        }

        if(dp[n][amount]!=-1) return dp[n][amount];
        int pick=1e8;
        if(coins[n]<=amount) pick=1+fun(n,coins,amount-coins[n],dp);
        int notpick=0+fun(n-1,coins,amount,dp);
        return dp[n][amount]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,0));
        // int a=fun(n-1,coins,amount,dp);
        for(int i=0;i<amount+1;i++){
            if(i%coins[0]==0) dp[0][i]=i/coins[0];
            else dp[0][i]=1e8;
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<amount+1;j++){
                int pick=1e8;
                if(coins[i]<=j) pick=1+dp[i][j-coins[i]];
                int notpick=dp[i-1][j];
                dp[i][j]=min(pick,notpick);
            }
        }
        
        if(dp[n-1][amount]<1e8) return dp[n-1][amount];
        return -1;
    }
};