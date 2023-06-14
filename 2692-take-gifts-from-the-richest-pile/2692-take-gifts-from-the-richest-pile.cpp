class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int i=0;long c=0;
        while(i<k){
            sort(gifts.begin(),gifts.end());
            reverse(gifts.begin(),gifts.end());
            gifts[0]=sqrt(gifts[0]);
            i++;
        }
        for(int j:gifts){
            c=c+j;
        }
        cout<<gifts[gifts.size()-1];
        return c;
    }
};