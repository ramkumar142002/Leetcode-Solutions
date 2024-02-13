class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0;i<=n;i++){
            int cnt = 0;
            int temp = i;
            while(temp){
                cnt += temp&1;
                temp = temp>>1;
                cout<<temp<<endl;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};