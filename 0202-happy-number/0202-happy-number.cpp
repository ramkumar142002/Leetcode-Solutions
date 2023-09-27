class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        // if(n<10) return false;
        set<int> x;
        while(n!=1){
            x.insert(n);
            int z=n;
            int c=0;
            while(z!=0){
                c=c+pow(z%10,2);
                z=z/10;
            }
            if(x.find(c)!=x.end()) return false;
            if(c==1) return true;
            n=c;
        }
        return true;
    }
};