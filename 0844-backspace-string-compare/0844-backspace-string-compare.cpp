class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#') a.push_back(s[i]);
            else if(a.size()>0) a.pop_back();
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#') b.push_back(t[i]);
            else if(b.size()>0) b.pop_back();
        }
        
        return (a==b);
        
    }
};