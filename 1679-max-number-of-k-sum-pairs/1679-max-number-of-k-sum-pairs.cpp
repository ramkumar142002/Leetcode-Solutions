class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int i = 0,j = nums.size()-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum == k){
                cnt++;i++;j--;
            }
            else if(sum>k) j--;
            else if(sum<k) i++;
            // if(sum<k) break;
        }
        return cnt;
    }
};