class Solution {
public:
    int maxScore(string s) {
        int ones = 0,zeros = 0;
        int lz = 0,ro = 0;
        int maxi = 0;
        
        for(int i = 0;i<s.size();i++){
            if(s[i]=='1') ones++;
            else zeros++;
        }
        ro = ones;
        
        for(int i = 0;i<s.size();i++){
            if(s[i]=='0'){
                lz++;
            }
            else if(s[i] == '1'){
                ro--;
            }
            if(i<s.size()-1) maxi = max(maxi,lz+ro);
        }
        return maxi;
    }
};