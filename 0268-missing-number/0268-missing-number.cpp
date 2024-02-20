class Solution {
public:
    int missingNumber(vector<int>& nums) {int c=0;
    int j=0;
    while(j<=nums.size()){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==j) c++;
            }
            if(c==0) return j;
            j++;
            c=0;
        }
        return false;
    }
};