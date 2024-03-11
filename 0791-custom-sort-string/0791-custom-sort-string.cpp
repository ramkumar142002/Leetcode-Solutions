class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        for(int i = 0;i<order.size();i++){
            for(int j = 0;j<s.size();j++){
                if(order[i] == s[j]){
                    ans += s[j];
                    s[j] = '$';
                }
            }
        }
        for(int i = 0;i<s.size();i++){
            if(s[i]!='$') ans += s[i];
        }
        return ans;
    }
};