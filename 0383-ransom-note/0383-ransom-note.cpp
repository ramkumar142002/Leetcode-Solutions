class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {int x=0;
        for(int i=0;i<ransomNote.length();i++){
            for(int j=0;j<magazine.length();j++){
                if(ransomNote[i]==magazine[j] && i!=j){
                    x++;
                    magazine[j]='1';
                    break;
                }
            }
        }
        if(x==ransomNote.length()) return true;
        return false;
    }
};