class Solution {
    public int[][] restoreMatrix(int[] rowSum, int[] colSum) {
        int[][] ans = new int[rowSum.length][colSum.length];
        for(int i = 0;i<ans.length;i++){
            for(int j = 0;j<ans[i].length;j++){
                ans[i][j] = Math.min(rowSum[i],colSum[j]);
                rowSum[i] -= ans[i][j];
                colSum[j] -= ans[i][j];
            }
        }
        return ans;
    }
}