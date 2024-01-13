class Solution {
public:
    int minSteps(string s, string t) {
        int arr1[26]  ={0},arr2[26]={0};
        for(int i = 0;i<s.size();i++){
            arr1[s[i]-'a']++;
            arr2[t[i]-'a']++;
        }
        int c = 0;
        for(int i = 0;i<26;i++){
            c += abs(arr1[i]-arr2[i]);
        }
        return c/2;
    }
};