class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxi = Integer.MIN_VALUE;
        for(int[] i : accounts){
            int temp = 0;
            for(int j : i){
                temp += j;
            }
            maxi = Math.max(maxi,temp);
        }
        return maxi;
    }
}