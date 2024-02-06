class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};
        ans[0] = binary(nums,target,true);
        ans[1] = binary(nums,target,false);
        return ans;
    }
    static int binary(int[] nums,int target,boolean startind){
        int start = 0,end = nums.length-1;
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(nums[mid] == target){
                ans = mid;
                if(startind){
                    end = mid - 1;
                }
                else{
                    start = mid  + 1;
                }
            }
            else if(nums[mid]>target) end = mid - 1;
            else start = mid + 1;
        }
        return ans;
    }
}