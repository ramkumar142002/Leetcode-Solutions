class Solution {
public:
    string oddString(vector<string>& words) {
        vector<int> a,b,c,d;
        for(int i=0;i<words[0].size()-1;i++){
            a.push_back(words[0][i+1]-words[0][i]);
            b.push_back(words[1][i+1]-words[1][i]);
            c.push_back(words[2][i+1]-words[2][i]);
        }
        if(a==b && a!=c) return words[2];
        if(a==c && a!=b) return words[1];
        if(b==c && a!=c) return words[0];

        int x=3;
        while(x<words.size()){
            for(int i=0;i<words[0].size()-1;i++){
                d.push_back(words[x][i+1]-words[x][i]);
            }
            if(d!=a) return words[x];
            x++;
            d.clear();
        }
        return 0;
    }
};