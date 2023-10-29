class Solution {
public:
    void permutations(vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp,int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        permutations(nums,ans,temp,i+1);
        temp.pop_back();
        permutations(nums,ans,temp,i+1);
    }
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        
//         vector<vector<int>> ans;
//         vector<int> temp;
//         permutations(nums,ans,temp,0);
//         sort(ans.begin(),ans.end());
        
//         cout<<ans.size()<<" "<<ans[0].size()<<endl;
        
//         for(int i=0;i<ans.size();i++){
//             for(int j=0;j<ans[0].size();j++){
//                 cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
//         for(int i=0;i<ans.size();i++){
//             if(ans[i]==nums){
//                 if(i+1 < ans.size()) nums = ans[i+1];
//                 else nums = ans[0];
//             }
//         }
    }
};