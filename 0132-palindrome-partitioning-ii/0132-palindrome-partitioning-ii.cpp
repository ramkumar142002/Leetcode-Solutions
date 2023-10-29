class Solution {
public:
    bool ispalindrome(int i,int j,string &temp){
       while(i<j){
           if(temp[i]!=temp[j]) return false;
           i++,j--;
       }
        return true;
    }
    int fun(string &s,int i,vector<int> &dp){
        if(i == s.size()) return 0;
        
        // string temp = "";
        if(dp[i]!=-1) return dp[i];
        int minc = INT_MAX;
        for(int j = i;j < s.size(); j++){
            // temp += s[j];
            if(ispalindrome(i,j,s)){
                int cost = 1 + fun(s,j+1,dp);
                minc = min(minc,cost);
            }
           
        }
        return dp[i] = minc;
    }
    int minCut(string s) {
        vector<int> dp(s.size(),-1);
        return fun(s,0,dp)-1;
    }
};
