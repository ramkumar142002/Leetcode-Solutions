class Solution {
public:
    int fun(vector<int> &prices,int ind,int n,int buy,vector<vector<vector<int>>> &dp,int tim){
        if(tim==0) return 0;
        if(ind>=n) return 0;
        

        int profit=0;

        if(dp[ind][buy][tim]!=-1) return dp[ind][buy][tim];
        if(buy){
            profit=max(-prices[ind]+fun(prices,ind+1,n,0,dp,tim),
            0+fun(prices,ind+1,n,1,dp,tim));
        }
        else{
            profit=max(prices[ind]+fun(prices,ind+1,n,1,dp,tim-1),
            0+fun(prices,ind+1,n,0,dp,tim));
        }
        return dp[ind][buy][tim]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (2,vector<int> (k+1,-1)));
        return fun(prices,0,n,1,dp,k);
    }
};