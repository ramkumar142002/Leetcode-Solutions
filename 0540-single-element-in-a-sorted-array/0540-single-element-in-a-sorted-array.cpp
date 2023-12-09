class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0,j = nums.size()-1;
        if(nums.size()==1) return nums[0];
        while(i<=j){
            if(nums[i]!=nums[i+1]) return nums[i];
            if(nums[j]!=nums[j-1]) return nums[j];
            i = i + 2;
            j = j - 2;
        }
        return -1;
    }
};