class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> ans;
        int i = 0,j = numbers.size()-1;
        cout<<i<<" "<<j<<endl;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum == target) return {i+1,j+1};
            else if(sum > target) j--;
            else i++;
            cout<<sum<<" "<<i<<" "<<j<<endl;
        }
        return {};
    }
};