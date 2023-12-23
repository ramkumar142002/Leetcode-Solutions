class Solution {
public:
    bool isPathCrossing(string path) {
        set<vector<int>> st;
        int v = 0,h = 0;
        for(int i = 0;i<path.size();i++){
            if(path[i]=='N') v++;
            else if(path[i]=='E') h++;
            else if(path[i]=='W') h--;
            else if(path[i]=='S') v--;
            
            if(v==0 && h==0) return true;
            auto pos = st.find({v,h});
            if(pos!=st.end()) return true;
            else{
                cout<<v<<" "<<h<<endl;
                st.insert({v,h});
            }
        }
        return false;
    }
};