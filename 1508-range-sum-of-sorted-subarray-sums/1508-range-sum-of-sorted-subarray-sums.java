class Solution {
    int mod = 1000000000+7;
    public int rangeSum(int[] nums, int n, int left, int right) {
        ArrayList<Integer> subSum = new ArrayList<>();
        for(int i = 0;i<nums.length;i++){
            int temp = 0;
            for(int j = i;j<nums.length;j++){
                temp += nums[j];
                subSum.add(temp);
            }
        }
        Collections.sort(subSum);
        int sum = 0;
        for(int i = left-1;i<=right-1;i++){
            sum = (subSum.get(i) + sum)%mod;
        }
        return sum%mod;
    }
}