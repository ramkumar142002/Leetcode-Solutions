class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left;i<=right;i++){
            int temp = i;
            int count = 0;
            while(temp){
                if(temp & 1 == 1) count++;
                temp = temp >> 1;
            }
            cout<<count<<endl;
            if(count <= 1) continue;
            else if(count == 2) ans++;
            else{
                int flag = 0;
                for(int j = 2;j<count;j++){
                    if(count%j == 0) flag = 1;
                }
                if(flag == 0) ans++;
            }
        }
        return ans;
    }
};