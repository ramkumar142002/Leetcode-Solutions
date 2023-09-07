class Solution {
public:
    int fun(vector<int> &nums,int ind,int prev,vector<vector<int>> &dp){
        if(ind==nums.size()) return 0;

        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int len=0+fun(nums,ind+1,prev,dp);
        if(prev==-1 || nums[ind]>nums[prev]){
            len=max(len,1+fun(nums,ind+1,ind,dp));
        }
        return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(),vector<int> (nums.size()+1,-1));
        return fun(nums,0,-1,dp);
    }
};