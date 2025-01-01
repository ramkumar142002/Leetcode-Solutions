class Solution {
    public int maxScore(String s) {
        int zeros = 0, ones = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='0') zeros++;
            else ones++;
        }
        int maxSum = 0;
        int zeroSum = 0;
        int oneSum = 0;
        for(int i = 0;i<s.length()-1;i++){
            if(s.charAt(i) == '0'){
                zeroSum++;
            }
            else{
                oneSum++;
            }
            maxSum = Math.max(maxSum, (zeroSum + (ones-oneSum)));
        }
        return maxSum;
    }
}