class Solution {
public:
    int fun(vector<int> &prices,int ind,int n,int buy,vector<vector<int>> &dp){
        if(ind==n) return 0;

        int profit=0;

        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy){
            profit=max(-prices[ind]+fun(prices,ind+1,n,0,dp),
            0+fun(prices,ind+1,n,1,dp));
        }
        else{
            profit=max(prices[ind]+fun(prices,ind+1,n,1,dp),
            0+fun(prices,ind+1,n,0,dp));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int> (2,-1));
        return fun(prices,0,n,1,dp);
    }
};