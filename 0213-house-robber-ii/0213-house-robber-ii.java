class Solution {
    public int rob(int[] nums) {
        if(nums.length==1) return nums[0];
        ArrayList<Integer> nums1 =  new ArrayList<Integer>();
        ArrayList<Integer> nums2 =  new ArrayList<Integer>();
        for(int i = 0;i<nums.length;i++){
            if(i!=0){
                nums1.add(nums[i]);
            }
            if(i!=nums.length-1){
                nums2.add(nums[i]);
            }
        }
        return Math.max(fun(nums1,nums1.size()-1),fun(nums2,nums2.size()-1));
    }
    public int fun(ArrayList<Integer> nums,int ind){
        int prev = nums.get(0);
        int prev2 = 0;
        
        for(int i = 1;i<nums.size();i++){
            int take = nums.get(i);
            if(i>1) take = nums.get(i) + prev2;
            int notake = prev;
            int cur = Math.max(take,notake);
            prev2 = prev;
            prev  = cur;
        }
        return prev;
    }
}