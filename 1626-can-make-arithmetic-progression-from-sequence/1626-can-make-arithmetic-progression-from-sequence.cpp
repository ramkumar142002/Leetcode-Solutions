class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int a=arr[1]-arr[0];
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<endl;
        // }
        for(int i=0;i<arr.size()-1;i++){
            cout<<arr[i+1]-arr[i]<<endl;
            if(a!=(arr[i+1]-arr[i])) return false;
            a=arr[i+1]-arr[i];
        }
        return true;
    }
};