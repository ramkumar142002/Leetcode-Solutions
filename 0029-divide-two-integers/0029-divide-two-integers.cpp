class Solution {
public:
    int divide(int dividend, int divisor) {long x=dividend;long y=divisor;
        if(x/y<-2147483648)return -2147483648;
        else if(x/y>2147483647)return 2147483647;
        return x/y;
    }
};