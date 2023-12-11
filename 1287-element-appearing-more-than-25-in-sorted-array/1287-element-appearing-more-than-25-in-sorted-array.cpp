class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int maxi = 0;
        int temp = arr[0];
        int s = 0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==temp){
                s++;
            }
            else{
                s=1;
                temp = arr[i];
            }
            if(s>arr.size()/4) return arr[i];
        }
        return temp;
    }
};