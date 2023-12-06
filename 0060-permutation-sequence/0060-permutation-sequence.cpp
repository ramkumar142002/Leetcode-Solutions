class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> arr;
        for(int i = 1;i<=n;i++){
            arr.push_back(i);
        }
        for(int i = 0;i<k-1;i++){
            next_permutation(arr.begin(),arr.end());
        }
        string s = "";
        for(int i = 0;i<arr.size();i++){
            s += to_string(arr[i]);
        }
        return s;
    }
};