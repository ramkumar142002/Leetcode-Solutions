class Solution {
    static long mod = 1000000007;
    public int countGoodStrings(int low, int high, int zero, int one) {
        long[] dp = new long[high+1];
        Arrays.fill(dp,-1);
        return (int)fun(low,high,zero,one,0,dp);
    }
    public long fun(int l,int h,int z,int o,int c,long[] dp){
        if (c > h) return 0; 

        long count = 0;
        if(dp[c]!=-1) return dp[c];
        if (c >= l && c <= h) count = 1;

        long t0 = fun(l, h, z, o, c + z, dp);
        long t1 = fun(l, h, z, o, c + o, dp);

        return dp[c] = (count + t0 + t1) % mod;
    }
}