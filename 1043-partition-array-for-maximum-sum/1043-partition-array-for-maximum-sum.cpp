class Solution {
public:
    int min(int a,int b){
        if(a<b) return a;
        if(b<a) return b;
        return a;
    }
    int part(int ind,vector<int> &arr,int k,vector<int> &dp){
        if(ind == arr.size()) return 0;
        
        if(dp[ind] != -1) return dp[ind];
        int max_ans = INT_MIN;
        int maxi = INT_MIN;
        int len = 0;
        for(int i=ind;i< min(arr.size(),ind+k);i++){
            len++;
            maxi = max(maxi,arr[i]);
            int sum = (len*maxi) + part(i+1,arr,k,dp);
            max_ans = max(max_ans,sum);
        }
        return dp[ind] = max_ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size(),-1);
        return part(0,arr,k,dp);
    }
};