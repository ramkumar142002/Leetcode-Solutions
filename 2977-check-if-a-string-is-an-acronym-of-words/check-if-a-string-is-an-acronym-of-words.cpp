class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string a;
        if(words.size()!=s.size()) return false;
        // sort(words.begin(),words.end());
        // sort(s.begin(),s.end());
        for(int i=0;i<words.size();i++){
            a+=words[i][0];
        }
        if(s==a) return true;
        return false;
    }
};