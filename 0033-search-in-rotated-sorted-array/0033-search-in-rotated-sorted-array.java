class Solution {
    public int search(int[] nums, int target) {
        int pivot = p(nums);
        if(pivot == -1) return bin(nums,target,0,nums.length-1);
        if(nums[pivot] == target) return pivot;
        
        int ans = bin(nums,target,0,pivot - 1);
        if(ans == -1) return bin(nums,target,pivot+1,nums.length-1);
        return ans;
    }
    public int p(int[] nums){
        int s = 0,e = nums.length-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(mid < e && nums[mid] > nums[mid+1]) return mid;
            if(mid > s && nums[mid] < nums[mid-1]) return mid-1;
            if(nums[s] >= nums[mid]) e = mid - 1;
            else s = mid+1;
        }
        return -1;
    }
    public int bin(int[] nums,int target,int start,int end){
        int s = start,e = end;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) e = mid - 1;
            else s = mid + 1;
        }
        return -1;
    }
}