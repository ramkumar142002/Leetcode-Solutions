class Solution {
public:
    int ret(vector<int>& coins,int ind,int amount,vector<vector<int>> &dp){
        if(amount==0) return 1;
        if(amount<0)return 0;
        if(ind<0)return 0;
        
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int take=ret(coins,ind,amount-coins[ind],dp);
        int notake=ret(coins,ind-1,amount,dp);

        return dp[ind][amount]=take+notake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(coins.size(),vector<int> (amount+1,-1));
        return ret(coins,n-1,amount,dp);
    }
};