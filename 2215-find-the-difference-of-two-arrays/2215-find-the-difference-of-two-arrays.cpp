class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> a,b;
        for(int i = 0;i<nums1.size();i++){
            a.insert(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++){
            b.insert(nums2[i]);
        }
        vector<int> arr1,arr2;
        for(auto x:a){
            if(b.find(x)==b.end()){
                arr1.push_back(x);
            }
        }
        for(auto y:b){
            if(a.find(y)==a.end()){
                arr2.push_back(y);
            }
        }
        vector<vector<int>> answer;
        answer.push_back(arr1);
        answer.push_back(arr2);
        return answer;
    }
};