class Solution {
public:
    bool isValid(string s) {int x=0;
        stack <char> c;
        int l=s.size();

        for(int i=0;i<l;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                c.push(s[i]);
            }
            else if(c.empty()) return false;
            else if(s[i]==')' && c.top()=='('){
                c.pop();
            }
            else if(s[i]=='}' && c.top()=='{'){
                c.pop();
            }
            else if(s[i]==']' && c.top()=='['){
                c.pop();
            }
            else
            return false;
        }
        
        if(c.empty()){
            return true;
        }
        else return false;
    }
};