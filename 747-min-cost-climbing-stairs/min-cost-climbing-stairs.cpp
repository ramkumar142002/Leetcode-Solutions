class Solution {
public:
    int fun(vector<int>& cost,int n,vector<int> &dp){
        if(n==0 || n==1) return cost[n]; 
        // if(n==1 || n==1) return 0;

        if(dp[n]!=-1) return dp[n];
        int first=cost[n]+fun(cost,n-1,dp);
        int second=INT_MAX;
        if(n>1) second=cost[n]+fun(cost,n-2,dp);

        return dp[n]=min(first,second);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return min(fun(cost,n-1,dp),fun(cost,n-2,dp));
    }
};