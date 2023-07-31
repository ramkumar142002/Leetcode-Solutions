class Solution {
public:
    vector<vector<int>> b;
    void  fun(int ind,vector<int>& candidates,int target,vector<int> &a){
        if(ind==candidates.size()){
            if(target==0){
                b.push_back(a);
            }
            return;
        }
        if(candidates[ind]<=target){
            a.push_back(candidates[ind]);
            fun(ind,candidates,target-candidates[ind],a);
            a.pop_back();
        }
        fun(ind+1,candidates,target,a);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> a;
        fun(0,candidates,target,a);
        return b;
    }
};