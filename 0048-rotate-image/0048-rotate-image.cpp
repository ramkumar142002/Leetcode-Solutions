class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int> a;
        int k=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                a.push_back(matrix[i][j]);
            }
        }
        for(int i=matrix.size()-1;i>-1;i--){
            for(int j=0;j<matrix.size();j++){
                matrix[j][i]=a[k++];
            }
        }
    }
};