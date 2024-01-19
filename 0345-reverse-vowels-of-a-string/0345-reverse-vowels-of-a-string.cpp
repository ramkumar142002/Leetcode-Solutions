class Solution {
public:
    string reverseVowels(string s) {
        int i = 0,j = s.size()-1;
        set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
        while(i<s.size()){
            while(i<s.size() && st.find(s[i])==st.end()){
                i++;
            }
            while(j>=0 && st.find(s[j])==st.end()){
                j--;
            }
            if(i<j){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            i++,j--;
        }
        return s;
    }
};
