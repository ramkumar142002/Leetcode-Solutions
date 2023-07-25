class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=1;
        while(i<arr.size()-1){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) return i;
            i++;
        }
        return 0;
    }
};