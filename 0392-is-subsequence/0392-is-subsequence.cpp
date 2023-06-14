class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s.length()==0) return true;
        while(i<s.length() && j<t.length()){
            if(s[i]!=t[i]){
                t.erase(j,1);
            }
            else{
                i++;
                j++;
            }
        }
        for(int k=0;k<s.length();k++){
            if(s[k]!=t[k]) return false;
        }
        return true;
    }
};