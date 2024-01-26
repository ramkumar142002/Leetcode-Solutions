class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int pre = 0;
        int maxi = 0;
        for(int i = 0;i<gain.size();i++){
            pre = pre + gain[i];
            maxi = max(maxi,pre);
        }
        return maxi;
    }
};