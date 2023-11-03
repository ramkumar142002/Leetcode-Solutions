class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        
        int tot = 1,z = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==0) z++;
            else tot *= nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(z>1) ans.push_back(0);
                else ans.push_back(tot);
            }
            else{
                if(z>0) ans.push_back(0);
                else ans.push_back(tot/nums[i]);
            }
        }
        
        return ans;
    }
};