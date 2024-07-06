class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        int curColor = image[sr][sc];
        dfs(image,sr,sc,newColor,curColor);
        
        return image;
    }
    public void dfs(int[][] image,int sr,int sc,int newColor,int curColor){
        image[sr][sc] = newColor;
        int[] rows = new int[]{-1,0,1,0};
        int[] cols = new int[]{0,1,0,-1};
        
        for(int i = 0;i<4;i++){
            int row = rows[i] + sr;
            int col = cols[i] + sc;
            
            if(row>-1 && row<image.length && col>-1 && col<image[0].length && 
              image[row][col]==curColor && image[row][col]!=newColor){
                image[row][col] = newColor;
                dfs(image,row,col,newColor,curColor);
            }
        }
    }
}