class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> ans;
        
        while(!empty(mp)){
            vector<int> temp;
            for(auto it=mp.begin();it!=mp.end();){
                temp.push_back(it->first);
                it->second--;
                if(it->second==0){
                    it = mp.erase(it);
                }
                else{
                    it++;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};