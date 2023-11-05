class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        if(k == 1) return max(arr[0],arr[1]);
        if(k>=arr.size()) return *max_element(arr.begin(),arr.end());
        
        int w = arr[0];
        int i=1;
        int cnt = 0;
        
       while(i<arr.size() && cnt<k){
           if(arr[i]>w){
               w = arr[i];
               cnt = 1;
           }
           else cnt++;
           i++;
       }
        
        return w;
    }
};
