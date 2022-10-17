class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==-1*nums[j] && i!=j)
                {
                    if(nums[j]>nums[i])
                        if(nums[j]>max)
                           max=nums[j];
                    else
                        if(nums[i]>max)
                           max=nums[i];
                }
            }
        }
        if(max==INT_MIN)
        {
            return -1;
        }
        return max;
    }
};