class Solution {
public:
    void fun(string temp,string digits,string mapping[],vector<string> &ans){
        if(digits.size() == 0){
            ans.push_back(temp);
            return;
        }
        
        int ind = (int)(digits[0] - '0') - 2;
        for(int i = 0;i<mapping[ind].size();i++){
            char ch = mapping[ind][i];
            fun(temp+ch,digits.substr(1,digits.size()-1),mapping,ans);
            // list.push_back(arr);
            // fun(temp+ch,digits.substr(1,digits.size()-1),mapping);
        }
        // return list;
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        if(digits.size() == 0){
            return ans;
        }
        string mapping[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp = "";
        fun(temp,digits,mapping,ans);
        return ans;
        
    }
};