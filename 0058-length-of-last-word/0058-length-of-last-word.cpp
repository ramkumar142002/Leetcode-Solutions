class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        int j = i-1;
        while(j>=0 && s[j]!=' '){
            j--;
        }
        return i-j;
    }
};