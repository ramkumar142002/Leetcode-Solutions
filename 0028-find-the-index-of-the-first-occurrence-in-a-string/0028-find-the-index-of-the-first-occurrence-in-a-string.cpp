class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==haystack) return 0;
        int i=0,j=needle.length();
        while(i+j <= haystack.length()){
            if(needle == haystack.substr(i,j)) return i;
            cout<<needle<<" "<<haystack.substr(i,j)<<endl;
            i++;
        }
        return -1;
    }
};