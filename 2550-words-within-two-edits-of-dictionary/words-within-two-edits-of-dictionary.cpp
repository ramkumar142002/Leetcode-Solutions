class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        if(queries[0].size()<2) return queries;
        vector<string> a;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<dictionary.size();j++){
                int k=0,c=0;
                while(k<queries[0].size()){
                    if(queries[i][k]==dictionary[j][k]){
                        // cout<<queries[i][k]<<endl;
                        c++;
                        cout<<c<<endl;
                    }
                    k++;
                }
                if(c>=queries[0].size()-2){
                    a.push_back(queries[i]);
                    break;
                }
            }
        }
        return a;
    }
};