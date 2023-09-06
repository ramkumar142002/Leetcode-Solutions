class Solution {
public:
    int fun(vector<int> &prices,int ind,int n,int buy,int fee,vector<vector<int>> &dp){
        if(ind==n) return 0;

        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy){
            return dp[ind][buy]=max(-prices[ind]+fun(prices,ind+1,n,0,fee,dp),
            0+fun(prices,ind+1,n,1,fee,dp));
        }
        else{
            return dp[ind][buy]=max(prices[ind]-fee+fun(prices,ind+1,n,1,fee,dp),
            0+fun(prices,ind+1,n,0,fee,dp));
        }
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int> (2,0));
        // return fun(prices,0,n,1,fee,dp);
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                if(buy){
                    dp[ind][buy]=max(-prices[ind]+dp[ind+1][0],
                    0+dp[ind+1][1]);
                }
                else{
                    dp[ind][buy]=max(prices[ind]-fee+dp[ind+1][1],
                    0+dp[ind+1][0]);
                }
            }
        }
        return dp[0][1];
    }
};