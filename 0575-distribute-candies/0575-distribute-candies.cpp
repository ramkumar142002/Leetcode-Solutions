class Solution {
public:
    int distributeCandies(vector<int>& candyType) {int c=1;
    sort(candyType.begin(),candyType.end());
        int x=candyType[0];
        for(int i=0;i<candyType.size();i++){
            if(candyType[i]!=x){
                x=candyType[i];
                c++;
            }
        }
        if(c>candyType.size()/2) return candyType.size()/2;
        return c;
    }
};