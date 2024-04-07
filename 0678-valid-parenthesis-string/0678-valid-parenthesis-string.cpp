class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open,stars;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '(') open.push(i);
            else if(s[i] == '*') stars.push(i);
            else if(s[i] == ')' && !open.empty()) open.pop();
            else if(s[i] == ')' && !stars.empty()) stars.pop();
            else return false;
        }
        while(!open.empty() && !stars.empty()){
            if(stars.top() < open.top()) return false;
            stars.pop();
            open.pop();
        }
        return open.empty();
    }
};