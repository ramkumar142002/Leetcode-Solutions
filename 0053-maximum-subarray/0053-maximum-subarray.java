class Solution {
    public int maxSubArray(int[] nums) {
        int[] dp = new int[nums.length];
        dp[0] = nums[0];
        int ans = dp[0];
        
        for(int i = 1;i<nums.length;i++){
            dp[i] = nums[i] + (dp[i-1]>0 ? dp[i-1] : 0);
            ans = Math.max(ans,dp[i]);
        }
        return ans;
    }
}