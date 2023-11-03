class Solution {
public:
    int fun(int ind,vector<int> &nums,vector<int> dp){
        if(ind == nums.size()-1) return 0;
        
        if(dp[ind] != 10001) return dp[ind];
        int mini = 10001;
        for(int i = 1;i <= nums[ind];i++){
            if(i+ind < nums.size()){
                mini = min(mini,1+fun(ind+i,nums,dp));
            }
        }
        return dp[ind] = mini;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,10001);
        // return fun(0,nums,dp);
        dp[nums.size()-1] = 0;
        
        int mini = 1000001;
        for(int i = nums.size()-1;i >= 0; i--){
            int mini = 10001;
            for(int j = 1;j <= nums[i];j++){
                if(j+i < nums.size()){
                    mini = min(mini,1+dp[i+j]);
                    dp[i] = mini;
                }
            }
        }
        cout<<dp[0]<<endl;
        return dp[0];
    }
};