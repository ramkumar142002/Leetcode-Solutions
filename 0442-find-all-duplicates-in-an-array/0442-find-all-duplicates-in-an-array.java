class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int i = 0;
        List<Integer> ans = new ArrayList<>();
        while(i<nums.length){
            // if(nums[i] != i+1){
                int correct = nums[i]-1;
                if(nums[i]!=nums[correct]){
                    swap(nums,i,nums[i]-1);
                }
                // else ans.add(nums[i]);
            // }
            else i++;
        }
        for( i = 0;i<nums.length;i++){
            if(nums[i]!=i+1) ans.add(nums[i]);
        }
        return ans;
    }
    void swap(int[] nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}