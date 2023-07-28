class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        vector<int> b;
        for(auto c:a){
            while(c.second){
                b.push_back(c.first);
                c.second--;
            }
        }
        return b;
    }
};