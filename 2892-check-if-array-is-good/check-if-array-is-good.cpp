class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()==2 && nums[0]==nums[1] && nums[0]>1) return false;
        if(nums.size()<=*max_element(nums.begin(),nums.end())) return false;
        map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        if(a[*max_element(nums.begin(),nums.end())]==2){
            for(auto i=a.begin();i!=a.end();i++){
                if(i->first!=*max_element(nums.begin(),nums.end()) && i->second!=1) return false; 
            }
            return true;
        }
        else return false;
    }
};