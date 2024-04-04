class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxAns = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                cout<<maxAns<<" "<<st.size()<<endl;
                maxAns = max(maxAns,(int)(st.size()));
                st.pop();
            }
        }
        return maxAns;
    }
};