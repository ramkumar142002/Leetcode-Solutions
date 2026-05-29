class Solution {
    public int minElement(int[] nums) {
        int mini = nums[0];
        for(int i = 0;i<nums.length;i++){
            int sum = 0;
            int d = nums[i];
            while(d!=0){
                sum += d%10;
                d = d/10;
            }
            System.out.println(sum);
            mini = Math.min(mini, sum);
        }
        return mini;
    }
}