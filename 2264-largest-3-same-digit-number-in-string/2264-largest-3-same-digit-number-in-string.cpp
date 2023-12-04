class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int maxi = -1;
        int ind = -1;
        for(int i = 0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(num[i]>maxi){
                    maxi = num[i];
                    ind = i;
                }
            }
        }
        if(maxi == -1) return ans;
        ans = num.substr(ind,3);
        return ans;
    }
};