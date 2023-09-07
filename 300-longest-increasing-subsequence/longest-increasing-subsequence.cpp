class Solution {
public:
    int fun(vector<int> &nums,int ind,int prev,vector<vector<int>> &dp){
        if(ind==nums.size()) return 0;

        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int len=0+fun(nums,ind+1,prev,dp);
        if(prev==-1 || nums[ind]>nums[prev]){
            len=max(len,1+fun(nums,ind+1,ind,dp));
        }
        return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        // vector<vector<int>> dp(nums.size()+1,vector<int> (nums.size()+1,0));

        vector<int> next(n+1,0);
        vector<int> cur(n+1,0);
        // return fun(nums,0,-1,dp);

        for(int ind=n-1;ind>=0;ind--){
            for(int prev=ind-1;prev>=-1;prev--){

                int len=0+next[prev+1];
                if(prev==-1 || nums[ind]>nums[prev]){
                    len=max(len,1+next[ind+1]);
                }
                cur[prev+1]=len;
            }
            next=cur;
        }
        return next[0];
    }
};