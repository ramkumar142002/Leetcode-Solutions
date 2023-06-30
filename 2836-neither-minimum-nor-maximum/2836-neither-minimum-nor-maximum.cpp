class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[0] && nums[i]<nums[nums.size()-1]) return nums[i];
        }
        return -1;
    }
};