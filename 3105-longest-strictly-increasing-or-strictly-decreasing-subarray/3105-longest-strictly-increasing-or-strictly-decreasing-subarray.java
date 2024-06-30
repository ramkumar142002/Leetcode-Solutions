class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int inc = 1,dec = 1;
        int maxi = 1;
        for(int i = 1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                inc++;
                maxi = Math.max(maxi,inc);
                dec = 1;
            }
            else if(nums[i]<nums[i-1]){
                dec++;
                maxi = Math.max(maxi,dec);
                inc = 1;
            }
            else{
                inc = 1;dec = 1;
            }
        }
        return maxi;
    }
}