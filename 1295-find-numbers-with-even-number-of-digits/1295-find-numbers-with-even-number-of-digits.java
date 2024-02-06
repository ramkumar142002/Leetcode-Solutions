class Solution {
    public int findNumbers(int[] nums) {
        int cnt = 0;
        for(int i = 0;i<nums.length;i++){
            int temp = nums[i];
            int c = 0;
            while(temp > 0){
                c++;
                temp = temp/10;
            }
            if(c%2 == 0) cnt++;
        }
        return cnt;
    }
}