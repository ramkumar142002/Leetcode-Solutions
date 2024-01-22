class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr(nums.size(),0);
        for(int i = 0;i<nums.size();i++){
            arr[nums[i]-1]++;
        }
        int rep;
        int z;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==0) z = i+1;
            if(arr[i]==2) rep = i+1;
        }
        return {rep,z};
    }
};