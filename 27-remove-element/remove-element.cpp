#include<bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // imap<int,int> a;
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val) a.push_back(nums[i]);
        }
        for(int i=0;i<a.size();i++){
            nums[i]=a[i];
        }
        return a.size();
    }
};

// i=2
