class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i = 0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        map<int,int> cmp;
        for(auto x:mp){
            cout<<x.first<<" "<<x.second<<endl;
            cmp[x.second]++;
            if(cmp[x.second]>1) return false;
        }
        return true;
    }
};