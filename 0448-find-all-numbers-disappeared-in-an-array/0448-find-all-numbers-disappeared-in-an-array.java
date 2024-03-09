class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int i = 0;
        List<Integer> li = new ArrayList<>();
        while(i<nums.length){
            int correct = nums[i] - 1;
            if(nums[i] != nums[correct]){
                swap(nums,correct,i);
            }
            else i++;
        }
        
        for( i = 0;i<nums.length;i++){
            if(nums[i] != i+1) li.add(i+1);
        }
        return li;
    }
     void swap(int[] nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}