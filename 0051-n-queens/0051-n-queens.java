class Solution {
    public List<List<String>> solveNQueens(int n) {
        char[][] board = new char[n][n];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                board[i][j] = '.';
            }
        }
        
        List<List<String>> ans = new ArrayList<>() ;
        queen(board,ans,0,n);
        return ans;
    }
    public void queen(char[][] board,List<List<String>> ans,int row,int n){
        if(row == n){
            ans.add(converter(board));
            return ;
        }
        
        for(int col = 0;col<n;col++){
            if(isSafe(board,row,col)){
                board[row][col] = 'Q';
                queen(board,ans,row+1,n);
                board[row][col] = '.';
            }
        }
    }
    public boolean isSafe(char[][] board,int row,int col){
        for(int i = 0;i<row;i++){
            if(board[i][col] == 'Q') return false;
        }
        int minLeft = Math.min(row,col);
        for(int i = 1;i<=minLeft;i++){
            if(board[row-i][col-i] == 'Q') return false;
        }
        int minRight = Math.min(row,board.length-col-1);
        for(int i = 1;i<=minRight;i++){
            if(board[row-i][col+i] == 'Q') return false;
        }
        
        return true;
    }
    public List<String> converter(char[][] board){
        List<String> arr = new ArrayList<>();
        for(int i = 0;i<board.length;i++){
            String row = new String(board[i]);
            arr.add(row);
        }
        return arr;
    }
}