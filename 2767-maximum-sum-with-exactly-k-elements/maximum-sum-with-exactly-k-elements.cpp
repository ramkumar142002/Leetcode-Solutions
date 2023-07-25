class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) { int c=0;int i=0;
        sort(nums.begin(),nums.end());
        while(k>0){
            c=c+nums[nums.size()-1]+i;
            i++;
            k--;
        }
        return c;
    }
    
};