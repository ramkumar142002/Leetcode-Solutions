class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n= bits.size();
        if(n==1) return bits[0]==0;
        if(n==2) return bits[0]==0;
        int i=0;
        
        while(i<n){
            if(bits[i]==0) i++;
            else i=i+2;
            if(i==n-2) return bits[i]==0;
            if(i>=n) return true;
        }
        return false;
    }
};