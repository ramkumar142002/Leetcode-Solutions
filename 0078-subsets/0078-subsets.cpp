class Solution {
public:
    void fun(vector<int> &nums,int ind,vector<vector<int>> &ans,vector<int> &temp){
        if(ind==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        fun(nums,ind+1,ans,temp);
        
        temp.pop_back();
        fun(nums,ind+1,ans,temp);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        // vector<int> flag(nums.size(),0);
        fun(nums,0,ans,temp);
        return ans;
    }
};