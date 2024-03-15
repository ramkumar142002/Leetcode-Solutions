class Solution {
    public int addDigits(int num) {
        // int ans = 0;
        int temp = num;
        while(temp>9){
            // System.out.println(ans);
            temp = fun(temp);
            // ans = temp;
        }
        return temp;
    }
    public int fun(int n){
        if(n<10) return n;
        return (n%10) + fun(n/10);
    }
}