class Solution {
public:
    int f(vector<int> nums,int ind){
        // if(ind==0) return nums[0];

        // if(dp[ind]!=-1) return dp[ind];
        // int pick=nums[ind];
        // if(ind>1) pick=nums[ind]+f(nums,ind-2,dp);
        // int notpick=0+f(nums,ind-1,dp);
        // return dp[ind]=max(pick,notpick);

        int prev=nums[0],prev2=0;
        for(int i=0;i<nums.size();i++){
            int pick = nums[i];
            if(i>1) pick=pick+prev2;
            int notpick=prev+0;
            int curi=max(pick,notpick);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {vector<int> x,y;
        // vector<int> dp(nums.size()-1,-1);
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0) x.push_back(nums[i]);
            if(i!=nums.size()-1) y.push_back(nums[i]);
        }
        return max(f(x,x.size()-1),f(y,y.size()-1));
    }
};