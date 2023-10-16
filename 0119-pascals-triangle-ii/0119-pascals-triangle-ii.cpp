class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        int i=0;
        vector<int> prev(1,1),cur(1,1);
        while(i<rowIndex){
            // cout<<i<<endl;
            
            cur.clear();
            cur.push_back(1);
            for(int j=0;j<prev.size()-1;j++){
                cur.push_back(prev[j]+prev[j+1]);
                cout<<prev[j]+prev[j+1]<<endl;
            }
            cur.push_back(1);
            prev=cur;
            
            i++;
        }
        
        return cur;
    }
};