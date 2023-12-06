class Solution {
public:
    int totalMoney(int n) {
        int c = 0;
        for(int i = 0;i<n;i++){
            c += (i%7)+(i/7+1);
        }
        return c;
    }
};