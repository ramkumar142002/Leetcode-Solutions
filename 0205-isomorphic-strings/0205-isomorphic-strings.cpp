class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp,tp;
        if(s.size()!=t.size()) return false;
        for(int i = 0;i<s.size();i++){
            if(mp[s[i]]){
                if(mp[s[i]]!=t[i]) return false;
            }
            if(tp[t[i]]){
                if(tp[t[i]]!=s[i]) return false;
            }
            mp[s[i]] = t[i];
            tp[t[i]] = s[i];
        }
        return true;
    }
};