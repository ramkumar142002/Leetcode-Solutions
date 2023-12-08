class Solution {
public:
    int numberOfMatches(int n) {
        int carry = 0;
        int ans = 0;
        while(n!=1){
            if(n%2!=0){
                carry++;
                n--;
            }
            ans += n/2;
            n = n/2;
        }
        ans+=carry;
        return  ans;
    }
};