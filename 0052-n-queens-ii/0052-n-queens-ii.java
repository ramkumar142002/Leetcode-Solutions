class Solution {
    public int totalNQueens(int n) {
        char[][] board = new char[n][n];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                board[i][j] = '.';
            }
        }
        return queen(board,0,n);
    }
    public int queen(char[][] board,int row,int n){
        if(row == n){
            return 1;
        }
        
        int count = 0;
        for(int col = 0;col<n;col++){
            if(isSafe(board,row,col)){
                board[row][col] = 'Q';
                count = count + queen(board,row+1,n);
                board[row][col] = '.';
            }
        }
        return count;
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
}