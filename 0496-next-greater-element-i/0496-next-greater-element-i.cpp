class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {int j=0,max=-1;
    vector<int> a;
        for(int i=0;i<nums1.size();i++){
            int j = 0;
            while(nums2[j]!=nums1[i]){
                j++;
            }
            while(j<nums2.size() && nums1[i]>=nums2[j]){
                j++;
            }
            if(j<nums2.size()) a.push_back(nums2[j]);
            else a.push_back(-1);
        }
        return a;
    }
};