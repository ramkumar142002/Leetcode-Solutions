class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a,b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        // return b;
        nums.clear();
        for(int i=0;i<a.size();i++){
            nums.push_back(a[i]);
            nums.push_back(b[i]);
        }
        return nums;
    }
};