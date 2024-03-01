class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0,zeros = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '1') ones++;
            else zeros++;
        }
        string ans = "";
        for(int i = 0;i<ones-1;i++) ans+='1';
        for(int i = 0;i<zeros;i++) ans+='0';
        ans+='1';
        return ans;
    }
};