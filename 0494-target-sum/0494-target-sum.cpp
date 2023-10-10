class Solution {
public:
    int fun(int n,vector<int>& nums, int target){
        // if(n==0){
        //     if(nums[0]+target==0 && nums[0]-target==0) return 2;
        //     if(nums[0]+target==0 || nums[0]-target==0) return 1;
        // }
        // if(n==-1){
        //     return (target==0);
        // }
        // if(target==0) return 1;
        // if(n<0) return target==0;

        // int add=(target+nums[n]==0)+fun(n-1,nums,target+nums[n]);
        // int sub = 0;
        // if(nums[n]>=target) sub=(target-nums[n]==0)+fun(n-1,nums,target-nums[n]);
        // return add+sub;
        
        if(n==-1){
            return (target==0);
        }
        
        int add=fun(n-1,nums,target+nums[n]);
        int sub=fun(n-1,nums,target-nums[n]);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return fun(n-1,nums,target);
    }
};