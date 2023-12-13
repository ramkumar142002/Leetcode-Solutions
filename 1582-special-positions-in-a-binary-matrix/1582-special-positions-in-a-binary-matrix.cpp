class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    int r = 0,c = 0;
                    for(int k = 0;k<mat[i].size();k++){
                        if(mat[i][k] == 1) r++;
                    }
                    for(int l = 0;l<mat.size();l++){
                        if(mat[l][j]==1) c++;
                    }
                    if(r==1 && c==1) ans++;
                }
            }
        }
        return ans;
    }
};