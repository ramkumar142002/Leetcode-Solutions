class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0;int left=0,rig=0;
        while(i<nums.size()){
            for(int j=i+1;j<nums.size();j++){
                rig=rig+nums[j];
            }
            if(left==rig) return i;
            rig=0;
            left=left+nums[i];
            i++;
        }
       
        return -1;
    }
};