class Solution {
public:
    // int adj(vector<int>& nums,int n,vector<int> &dp){
    //     if(n==0) return nums[0];
    //     if(n<1) return 0;
    //     if(dp[n]!=-1) return dp[n];
    //     int pick=nums[n]+adj(nums,n-2,dp);
    //     int notpick=0+adj(nums,n-1,dp);
    //     return dp[n]=max(pick,notpick);
    // }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        // return adj(nums,nums.size()-1,dp);
        // dp[0]=nums[0];
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<nums.size();i++){
            int pick=nums[i];
            if(i>1) pick=nums[i]+prev2;
            int notpick=prev+0;
            int curi=max(pick,notpick);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
};