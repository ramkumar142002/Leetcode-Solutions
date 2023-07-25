class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                s=s+nums[i];
                n++;
            }
        }
        if(n==0) return 0;
        return s/n;
    }
};