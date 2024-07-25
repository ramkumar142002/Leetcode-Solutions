class Solution {
    public int rob(int[] nums) {
        int[] dp = new int[nums.length];
        Arrays.fill(dp,0);
        // return fun(nums,nums.length-1,dp);
        dp[0] = nums[0];
        for(int ind = 1;ind<nums.length;ind++){
            int take = nums[ind];
            if(ind-2 > -1) take = nums[ind] + dp[ind-2];
            int notake = 0 + dp[ind-1];
            
            dp[ind] = Math.max(take,notake);
        }
        return dp[nums.length-1];
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