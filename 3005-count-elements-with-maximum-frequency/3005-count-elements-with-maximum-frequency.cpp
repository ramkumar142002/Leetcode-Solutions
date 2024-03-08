class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi = 0;
        for(auto i : mp){
            maxi = max(maxi,i.second);
        }
        int cnt = 0;
        for(auto i : mp){
            if(i.second == maxi) cnt++;
        }
        return maxi * cnt;
    }
};