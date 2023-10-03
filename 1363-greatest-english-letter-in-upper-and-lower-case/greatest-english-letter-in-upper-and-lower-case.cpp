class Solution {
public:
    string greatestLetter(string s) {
        vector<int> u(26,0),l(26,0);
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                u[s[i]-'A']++;
            }
            else{
                l[s[i]-'a']++;
            }
        }
        
        for(int i=25;i>=0;i--){
            if(u[i]>0 && l[i]>0){
                string ans="";
                 ans+=(i+'A') ;
                return ans;
            }
        }
        return "";
    }
};