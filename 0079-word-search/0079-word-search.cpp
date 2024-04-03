class Solution {
public:
    bool fun(vector<vector<char>>& board,int i,int j,string word,int ind){
        if(ind==word.size()) return true;
        if(i>=board.size() ||i<0 || j>=board[i].size() || j<0) return false;
        
        if(word[ind] == board[i][j]){
            char ch = board[i][j];
            board[i][j] = '.';
            if( fun(board,i,j+1,word,ind+1) || fun(board,i+1,j,word,ind+1) || fun(board,i-1,j,word,ind+1) ||
                fun(board,i,j-1,word,ind+1)) return true;
            board[i][j] = ch;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[i].size();j++){
                if(board[i][j] == word[0]){
                    if(fun(board,i,j,word,0)) return true;
                }
            }
        }
        return false;
    }
};