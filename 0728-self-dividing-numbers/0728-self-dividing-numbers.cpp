class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        vector<int> temp;
        int c=0;
        for(int i=left;i<=right;i++){
            
            int tempo=i;
            while(tempo!=0){
                temp.push_back(tempo%10);
                tempo =tempo/10;
            }
            // cout<<temp.size()<<endl;
            
            for(int j=0;j<temp.size();j++){
                if(temp[j]!=0 && i%temp[j]==0) c++;
            }
            // cout<<i<<" "<<i<<endl;
            if(c==temp.size()) ans.push_back(i);
            temp.clear();
            c=0;
        }
        return ans;
    }
};