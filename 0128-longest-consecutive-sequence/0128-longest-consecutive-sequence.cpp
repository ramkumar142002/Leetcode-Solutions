class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int maxi = 1;
        int ans = 1;
        for(int i=1;i<nums.size();i++){
            cout<<nums[i]<<endl;
            if(nums[i] == nums[i-1]+1){
                maxi++;
            }
            else if(nums[i] == nums[i-1]) maxi = maxi;
            else maxi = 1;
            ans = max(ans,maxi);
        }
        return ans;
    }
};