class Solution {
public:
    int alpha(string a){
        for(int i=0;i<a.length();i++){
            if(isalpha(a[i])) return a.length();
        }
        return stoi(a);
    }
    int maximumValue(vector<string>& strs) {
        int maxa=0;
        for(int i=0;i<strs.size();i++){
            maxa=max(maxa,alpha(strs[i]));
        }
        return maxa;
    }
};