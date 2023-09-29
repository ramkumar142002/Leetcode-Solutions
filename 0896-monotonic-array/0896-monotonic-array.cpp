class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc=0,dec=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) inc=1;
            if(nums[i]<nums[i+1]) dec=1;
        }
        if(inc && dec) return false;
        return true;
    }
};