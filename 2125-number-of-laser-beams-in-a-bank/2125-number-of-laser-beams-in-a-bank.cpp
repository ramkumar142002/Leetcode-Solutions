class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ret = 0;
        int prev = 0;
        for(int i = 0;i<bank.size();i++){
            int newrow = 0;
            for(int j = 0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    newrow++;
                }
            }
            cout<<prev<<endl;
            if(newrow==0){
                prev = prev;
            }
            else{
                ret += (prev*newrow);
                prev = newrow;
            }
        }
        return ret;
    }
};