class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int i = 1;i<10;i++){
            int num = i;
            int next = i+1;
            
            while(next<10 && num<=high){
                num = num*10 + next;
                if(num<=high && num>=low) ans.push_back(num);
                next++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};