class Solution {
public:
    bool checkRecord(string s) {int i=0;int c=0;
        while(i<s.length()){
            // if(s[i]=='P') l=0,a=0;
            if(s[i]=='A'){
                c++;
                if(c>=2)return false;
            }
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L') return false;
            i++;
        }
        return true;
    }
};