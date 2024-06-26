class Solution {
    public int longestOnes(int[] nums, int k) {
        int maxi = -1000000009;
        int num_count = 0;
        
        int i = 0;
        for(int j = 0;j<nums.length;j++){
            if(nums[j]==0){
                num_count++;
            }
            while(num_count>k){
                if(nums[i]==0){
                    num_count--;
                }
                i++;
            }
             maxi = Math.max(maxi,(j-i+1));
        }
        return maxi;
    }
}