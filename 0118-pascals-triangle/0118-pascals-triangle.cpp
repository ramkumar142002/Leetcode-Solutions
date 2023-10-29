class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       
        vector<vector<int>> ans;
        if(numRows == 0) return ans;
        vector<int> prev(1,1);
        ans.push_back(prev);
        int i=1;
        while(i<numRows){
            vector<int> cur;
            cur.push_back(1);
            for(int j=0;j<prev.size();j++){
                if(j+1 < prev.size()) cur.push_back(prev[j]+prev[j+1]);
            }
            cur.push_back(1);
            ans.push_back(cur);
            prev = cur;
            i++;
        }
        return ans;
    }
};