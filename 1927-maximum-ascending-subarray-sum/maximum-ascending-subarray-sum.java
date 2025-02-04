class Solution {
    public int maxAscendingSum(int[] nums) {
        int sum = nums[0];
        int maxi = sum;
        for(int i = 1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                sum += nums[i];
            }else sum = nums[i];

            maxi = Math.max(maxi,sum);
        }
        return maxi;
    }
}