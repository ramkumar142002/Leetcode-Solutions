class Solution {
public:
    bool fun(vector<int> &nums,int ind,vector<int> &dp){
        if(ind == nums.size()-1) return true;
        if(nums[ind]==0) return false;
        
        if(dp[ind]!=-1) return dp[ind];
        for(int i = 1;i <= nums[ind];i++){
            if(i+ind < nums.size() && fun(nums,ind+i,dp)) return dp[ind] = true;
        }
        return dp[ind] = false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return fun(nums,0,dp);
    }
};