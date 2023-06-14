class Solution {
public:
    bool checkPerfectNumber(int num) {
        int x=1;int q;
        while(x<=num/2){
            if(num%x==0) q=q+x;
            x++;
        }
        if(q==num) return true;
        return false;
    }
};