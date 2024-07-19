class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        ArrayList<Integer> mins = new ArrayList<>();
        ArrayList<Integer> maxs = new ArrayList<>();
        for(int i = 0;i<matrix.length;i++){
            int mini = matrix[i][0];
            for(int j = 0;j<matrix[i].length;j++){
                mini = Math.min(mini,matrix[i][j]);
            }
            mins.add(mini);
        }
        for(int i = 0;i<matrix[0].length;i++){
            int maxi = matrix[0][i];
            for(int j = 0;j<matrix.length;j++){
                maxi = Math.max(maxi,matrix[j][i]);
            }
            maxs.add(maxi);
        }
       ArrayList<Integer> ans = new ArrayList<>();
        for(int i = 0;i<matrix.length;i++){
            for(int j = 0;j<matrix[i].length;j++){
                if(matrix[i][j]==mins.get(i) && matrix[i][j]==maxs.get(j)) ans.add(matrix[i][j]);
            }
        }
        
        return ans;
    }
}