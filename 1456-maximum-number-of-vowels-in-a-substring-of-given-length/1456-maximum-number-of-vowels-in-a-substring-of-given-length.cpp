class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> st = {'a','e','i','o','u'};
        int cnt = 0;
        for(int i = 0;i<k;i++){
            if(st.find(s[i])!=st.end()){
                cnt++;
            }
        }
        int maxi = cnt;
        int i = k;
        while(i<s.size()){
            cout<<cnt<<endl;
            if(st.find(s[i-k])!=st.end()){
                cnt--;
            }
            if(st.find(s[i])!=st.end()){
                cnt++;
            }
            maxi = max(maxi,cnt);
            i++;
        }
        return maxi;
    }
};