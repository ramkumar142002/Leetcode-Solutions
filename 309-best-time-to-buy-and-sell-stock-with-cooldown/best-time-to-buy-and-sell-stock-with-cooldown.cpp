class Solution {
public:
    int fun(vector<int> &prices,int ind,int n,int buy,vector<vector<int>> &dp){
        if(ind>=n) return 0;

        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy==1){
            return dp[ind][buy]=max(-prices[ind]+fun(prices,ind+1,n,0,dp),
            0+fun(prices,ind+1,n,1,dp));
        }
        else{
            return dp[ind][buy]=max(prices[ind]+fun(prices,ind+2,n,1,dp),
            0+fun(prices,ind+1,n,0,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+2,vector<int> (2,0));
        // return fun(prices,0,n,1,dp);

        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                if(buy==1){
                    dp[ind][buy]=max(-prices[ind]+dp[ind+1][0],
                    0+dp[ind+1][1]);
                }
                else
                    dp[ind][buy]=max(prices[ind]+dp[ind+2][1],
                    0+dp[ind+1][0]);
            }
        }
        return dp[0][1];
    }
};