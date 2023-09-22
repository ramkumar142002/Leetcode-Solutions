class Solution {
public:
    int fun(string s, string t,int i,int j){
        // if(i==0 && j==0) return (s[o]==t[0]);
        if(i<0 || j<0) return false;
        
        // bool take=false;
        if(s[i]==t[j]) return 1+ fun(s,t,i-1,j-1);
        else return fun(s,t,i,j-1);
        // return 

    }
    bool isSubsequence(string s, string t) {
        int x=s.size();
        if(x==fun(s,t,s.size()-1,t.size()-1)) return true;
        return false;

    }
};