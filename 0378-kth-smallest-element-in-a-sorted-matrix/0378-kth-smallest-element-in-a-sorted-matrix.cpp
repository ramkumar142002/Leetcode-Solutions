class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {vector<int> c;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                c.push_back(matrix[i][j]);
            }
        }
        sort(c.begin(),c.end());
        return c[k-1];
    }
};