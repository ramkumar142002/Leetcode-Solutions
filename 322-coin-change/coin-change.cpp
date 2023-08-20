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
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        int a=fun(n-1,coins,amount,dp);
        if(a<1e8) return a;
        return -1;
    }
};