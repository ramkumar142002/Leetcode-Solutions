class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string> mp;
        mp.insert({'a',".-"});
        mp.insert({'b',"-..."});
        mp.insert({'c',"-.-."});
        mp.insert({'d',"-.."});
        mp.insert({'e',"."});
        mp.insert({'f',"..-."});
        mp.insert({'g',"--."});
        mp.insert({'h',"...."});
        mp.insert({'i',".."});
        mp.insert({'j',".---"});
        mp.insert({'k',"-.-"});
        mp.insert({'l',".-.."});
        mp.insert({'m',"--"});
        mp.insert({'n',"-."});
        mp.insert({'o',"---"});
        mp.insert({'p',".--."});
        mp.insert({'q',"--.-"});
        mp.insert({'r',".-."});
        mp.insert({'s',"..."});
        mp.insert({'t',"-"});
        mp.insert({'u',"..-"});
        mp.insert({'v',"...-"});
        mp.insert({'w',".--"});
        mp.insert({'x',"-..-"});
        mp.insert({'y',"-.--"});
        mp.insert({'z',"--.."});
        
        string ans;
        set<string> st;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                ans += mp[words[i][j]];
            }
            st.insert(ans);
            ans = "";
        }
        return st.size();
    }
};