class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i]!="./" && logs[i]!="../") c++;
            else if(logs[i]=="../"){
                c--;
                if(c<0) c=0;
            }
            else c+=0;
        }
        if(c<=0) return 0;
        return c;
    }
};