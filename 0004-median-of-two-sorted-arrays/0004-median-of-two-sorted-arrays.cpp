class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0,j = 0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        
        
        int n = ans.size()/2;
        cout<<n<<endl;
        if(ans.size()%2==0){
            return (double)(ans[n-1]+ans[n])/2;
        }
        else{
            return ans[n];
        }
        return ans[n];
        return 1.0;
        
    }
};