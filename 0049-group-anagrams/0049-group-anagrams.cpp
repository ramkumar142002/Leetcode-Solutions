class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> temp;
        vector<string> sorted;
        vector<bool> b;
        for(int i=0;i<strs.size();i++){
            sorted.push_back(strs[i]);
            b.push_back(false);
            sort(sorted[i].begin(),sorted[i].end());
            // sorted.push_back(strs[i]);
        }
        
        for(int i=0;i<sorted.size();i++){
            if(b[i]==false){
                temp.push_back(strs[i]);
                b[i]=true;
            
                for(int j=i+1;j<sorted.size();j++){
                    if(sorted[i]==sorted[j] && b[j]==false){
                        temp.push_back(strs[j]);
                        b[j]=true;
                    }
                }
                ans.push_back(temp);
                temp.clear();
            }
          }
        
        return ans;
    }
};