class Solution {
    public boolean isHappy(int n) {
        int f = n,s = n;
        do{
            f = square(square(f));
            s = square(s);
            if(f == 1 || s == 1) return true;
        }while(s!=f);
        
        // if(s == 1 || f==1) return true;
        return false;
    }
    public int square(int n){
        int ans = 0;
        while(n>0){
            int rem = n%10;
            ans = ans + (rem*rem);
            n = n/10;
        }
        return ans;
    }
}