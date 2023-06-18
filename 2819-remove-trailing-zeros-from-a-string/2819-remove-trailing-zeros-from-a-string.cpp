class Solution {
public:
    string removeTrailingZeros(string num) {
       while(num[num.length()-1]=='0'){
           num.pop_back();
       }
       return num;
    }
};