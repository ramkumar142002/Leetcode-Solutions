class Solution {
public:
    // int ret(vector<int>& coins,int ind,int amount,vector<vector<int>> &dp){
    //     if(amount==0) return 1;
    //     if(amount<0)return 0;
    //     if(ind<0)return 0;
        
    //     if(dp[ind][amount]!=-1) return dp[ind][amount];
    //     int take=ret(coins,ind,amount-coins[ind],dp);
    //     int notake=ret(coins,ind-1,amount,dp);

    //     return dp[ind][amount]=take+notake;
    // }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int> (amount+1,0));
        // return ret(coins,n-1,amount,dp);
        for(int i=0;i<n;i++) dp[i][0]=1;

        for(int i=0;i<n;i++){
            for(int j=1;j<=amount;j++){
                int take=0,notake=0;
                if(j>=coins[i])  take=dp[i][j-coins[i]];
                if(i>0) notake=dp[i-1][j];

                dp[i][j]=take+notake;
            }
        }
        return dp[n-1][amount];
    }
};