class Solution {
public:
    bool f(vector<int>& nums,int n,int target,vector<vector<int>> &dp){
        if(target==0) return true;
        if(n==0) return(nums[0]==target);

        if(dp[n][target]!=-1) return dp[n][target];
        bool take=false;
        if(nums[n]<=target) take=f(nums,n-1,target-nums[n],dp);
        bool notake=f(nums,n-1,target,dp);
        return dp[n][target]=take|notake;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int target=0;
        for(int i=0;i<n;i++) target+=nums[i];
        if(target%2) return false;
        target/=2;
        vector<vector<int>> dp(n,vector<int> (target+1,-1));

        return f(nums,n-1,target,dp);
    }
};