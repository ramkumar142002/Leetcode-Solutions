class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // int n=word1.length()+word2.length();
        // string a[n]={0};
        string a = "";
        int i=0;
        while(i<word1.size() && i<word2.size()){
            a+=word1[i];
            a+=word2[i];
            i++;
        }
        while(i<word1.size()){
            a+=word1[i];
            i++;
        }
        while(i<word2.size()){
            a+=word2[i];
            i++;
        }
        
        return a;
    }
};