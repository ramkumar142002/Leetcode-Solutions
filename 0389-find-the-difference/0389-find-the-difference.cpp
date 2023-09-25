class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.size();
        int i;
        for(i=0;i<n;i++){
            if(s[i]!=t[i]) return t[i];
        }
        if(i==n) return t[n];
        return 'a';
    }
};