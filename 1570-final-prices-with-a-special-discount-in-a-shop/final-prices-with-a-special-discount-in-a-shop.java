class Solution {
    public int[] finalPrices(int[] prices) {
        int[] ans = new int[prices.length];
        ans = prices;
        for(int i = 0;i<prices.length;i++){
            for(int j = i+1;j<prices.length;j++){
                if(prices[j]<=prices[i]){
                    ans[i] -= prices[j];
                    break;
                }
            }
        }
        return ans;
    }
}