class Solution {
    public int waysToSplitArray(int[] nums) {
        long sum = 0, preSum = 0;
        for(int i = 0;i<nums.length;i++){
            sum += nums[i];
        }
        int ans = 0;
        for(int i = 0;i<nums.length-1;i++){
            preSum += nums[i];
            sum -= nums[i];
            if(preSum >= sum) ans++;
        }
        return ans;
    }
}