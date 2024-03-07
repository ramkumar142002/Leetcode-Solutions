class Solution {
public:
    int fun(string s,int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        if(s.size()==0) return "";
        int start = 0;
        int end = 0;
        
        for(int i = 0;i<s.size();i++){
            int len1 = fun(s,i,i);
            int len2 = fun(s,i,i+1);
            int len = max(len1,len2);
            
            if(len > end-start){
                start = i - ((len-1)/2);
                end = i + (len/2);
            }
        }
        cout<<start<<" "<<end<<endl;
        return s.substr(start,end-start+1);
    }
};