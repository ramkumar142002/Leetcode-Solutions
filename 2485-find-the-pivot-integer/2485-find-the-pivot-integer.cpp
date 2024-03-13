class Solution {
public:
    int pivotInteger(int n) {
        int total = 0;
        for(int i = 1;i<=n;i++) total += i;
        int prefix = 0;
        for(int i = 1;i<=n;i++){
            prefix += i;
            int suffix = total - prefix + i;
            if(prefix == suffix) return i;
            if(prefix>suffix) return -1;
        }
        return -1;
    }
};