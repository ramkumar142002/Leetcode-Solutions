class Solution {
public:
    char repeatedCharacter(string s) {
        int a[26]={0};int i=0;
        while(i<s.length()){
            a[s[i]-'a']++;
            if(a[s[i]-'a']>1) return s[i];
            i++;
        }
        return '0';
    }
};