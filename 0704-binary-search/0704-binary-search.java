class Solution {
    public int search(int[] nums, int target) {
        return fun(nums,target,0,nums.length-1);
    }
    public int fun(int nums[],int target,int begin,int end){
        int mid = (begin+end)/2;
        if(begin>end) return -1;
        if(nums[mid] == target) return mid;
        else if(target>nums[mid]) return fun(nums,target,mid+1,end);
        else return fun(nums,target,begin,mid-1);
        // return -1;
    }
}