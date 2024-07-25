class Solution {
    public int rob(int[] nums) {
        int[] dp = new int[nums.length];
        Arrays.fill(dp,-1);
        return fun(nums,nums.length-1,dp);
    }
    public int fun(int nums[],int ind,int[] dp){
        if(ind<0) return 0;
        
        if(dp[ind]!=-1) return dp[ind];
        int take = 0,notake = 0;
        take = nums[ind] + fun(nums,ind-2,dp);
        notake = 0 + fun(nums,ind-1,dp);
        
        return dp[ind] = Math.max(take,notake);
    }
}