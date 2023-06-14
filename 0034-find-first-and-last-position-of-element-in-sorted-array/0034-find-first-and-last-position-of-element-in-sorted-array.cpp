class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {int x[2];int n=0;vector<int> c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && n==0){
                x[0]=i;
                n++;
            }
            else if(nums[i]==target && n!=0){
                n++;
            }
        }
        x[1]=x[0]+n-1;
        if(n==0){
            x[0]=-1;
            x[1]=-1;
        }
        c.push_back(x[0]);
        c.push_back(x[1]);
        return c;
    }
};