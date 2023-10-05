class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/3) s.insert(nums[i]);
        }
        vector<int> ans(s.begin(),s.end());
        return ans;
    }
};