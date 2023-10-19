class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> a;
        for(int i=0;i<s.size();i++){
            if(a.empty()){
                a.push_back(widths[s[i]-'a']);
            }
            else if(widths[s[i]-'a'] + a.back() > 100) a.push_back(widths[s[i]-'a']);
            else a[a.size()-1] +=  widths[s[i]-'a'];
        }
        
        vector<int> ans;
        ans.push_back(a.size());
        ans.push_back(a.back());
        return ans;
    }
};