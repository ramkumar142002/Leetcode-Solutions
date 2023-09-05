class Solution {
public:
    int fun(vector<int> &prices,int ind,int n,int buy,vector<vector<vector<int>>> &dp,int tim){
        if(tim==0) return 0;
        if(ind==n) return 0;
        

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

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int> (3,0)));
        // return fun(prices,0,n,1,dp,2);

        vector<vector<int>> after(2,vector<int> (3,0));
        vector<vector<int>> cur(2,vector<int> (3,0));

        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int tim=1;tim<=2;tim++){
                    if(buy==1){
                        cur[buy][tim]=
                            max(-prices[ind]+after[0][tim],
                        0+after[1][tim]);
                    }
                    else{
                        cur[buy][tim]
                            =max(prices[ind]+after[1][tim-1],
                        0+after[0][tim]);
                    }
                }
            }
            after=cur;
        }
        return after[1][2];;
    }
};