class Solution {
public:
    void fun(vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans,int n){
        if(n<0){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[n]);
        fun(nums,temp,ans,n-1);
        temp.pop_back();
        fun(nums,temp,ans,n-1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        fun(nums,temp,ans,nums.size()-1);
        set<vector<int>> st(ans.begin(),ans.end());
        vector<vector<int>> ret;
        for(auto a:st){
            ret.push_back(a);
        }
        return ret;
    }
};