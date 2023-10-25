class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxl[n],maxr[n];
        maxl[0]=height[0];
        maxr[n-1] = height[n-1];
        
        for(int i=0;i<n;i++){
            if(i>0) maxl[i] = max(maxl[i-1],height[i]);
            if(n-i-2 >= 0) maxr[n-i-2] = max(maxr[n-i-1],height[n-i-2]);
        }
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum += min(maxl[i],maxr[i]) - height[i];
        }
        
        return sum;
    }
};