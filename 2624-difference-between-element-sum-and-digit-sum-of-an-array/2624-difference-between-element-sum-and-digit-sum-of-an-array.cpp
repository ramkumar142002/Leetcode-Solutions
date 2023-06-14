class Solution {
public:
    int differenceOfSum(vector<int>& nums) {int e=0,d=0;
    vector<int> sum;
    for(int i=0;i<nums.size();i++){
        e=e+nums[i];
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]<10) sum.push_back(nums[i]);
        else{
            int s=nums[i];
            while(s!=0){
                sum.push_back(s%10);
                s=s/10;
            }
        }
    }
    for(int i=0;i<sum.size();i++){
        d=d+sum[i];
    }
    return abs(d-e);
    }
};