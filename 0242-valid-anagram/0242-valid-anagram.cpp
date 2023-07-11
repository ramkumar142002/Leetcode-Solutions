class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> x,y;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            x[s[i]]++;
            y[t[i]]++;
        }
        if(x==y) return true;
        return false;
    }
};