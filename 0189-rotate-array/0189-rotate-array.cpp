class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // for(int i = 0;i<k;i++){
        //     int temp = nums[nums.size()-1];
        //     for(int k = nums.size()-1;k>0;k--){
        //         nums[k] = nums[k-1];
        //     }
        //     nums[0] = temp;
        // }
        // int n = nums.size();
        // for(int i = 0;i<k;i++){
        //     nums.insert(nums.begin(),nums[nums.size()-1]);
        //     nums.pop_back();
        // }
        
        vector<int> temp;
        k = k%nums.size();
        for(int i = nums.size()-k;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0;i<nums.size()-k;i++){
            temp.push_back(nums[i]);
        }
        nums = temp;
    }
};