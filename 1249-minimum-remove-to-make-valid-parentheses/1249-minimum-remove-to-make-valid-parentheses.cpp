class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')' && st.empty()){
                s.erase(i,1);
                i--;
            }
            else if(s[i] == ')'){
                st.pop();
            }
        }
        while(!st.empty()){
            int ind = st.top();
            s.erase(ind,1);
            st.pop();
        }
        return s;
    }
};