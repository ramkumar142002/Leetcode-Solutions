class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int c[26] = {0};
        for(int i = 0;i<chars.size();i++){
            c[chars[i]-'a']++;
        }
        int ans = 0;
        for(int i = 0;i<words.size();i++){
            int temp[26] = {0};
            int flag = 0;
            for(int j = 0;j<words[i].size();j++){
                temp[words[i][j]-'a']++;
                if(temp[words[i][j]-'a']>c[words[i][j]-'a']) flag = 1;
            }
            if(flag==0) ans+=words[i].size();
        }
        return ans;
    }
};