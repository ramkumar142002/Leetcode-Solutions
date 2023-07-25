class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> a,b;
        for(int x:nums){
            if(x<10) a.push_back(x);
            else{
                while(x!=0){
                    b.push_back(x%10);
                    x=x/10;
                }
                reverse(b.begin(),b.end());
                a.insert(a.end(),b.begin(),b.end());
                b.clear();
            }
        }
        return a;
    }
};