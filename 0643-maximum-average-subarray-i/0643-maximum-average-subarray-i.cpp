class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double ans=INT_MIN;
        double c=0;
        for(int z=0;z<k;z++){
                c+=nums[z];
        }
        ans=c;
        int i=1;int j=k;
        while(j<nums.size()){
            
            cout<<c<<endl;
            c=c+nums[j]-nums[i-1];
            
            ans=max(ans,c);
            i++;j++;
        }
        return ans/k;
    }
};