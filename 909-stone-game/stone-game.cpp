class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0;
        int alice=0,bob=0;
        while(piles.size()>0){
            if(i%2==0){
                if(piles[0]>piles[piles.size()-1]){
                    alice+=piles[0];
                    piles.erase(piles.begin());
                }
                else{
                    alice+=piles[piles.size()-1];
                    piles.pop_back();
                }
            }
            else{
                if(piles[0]>piles[piles.size()-1]){
                    bob+=piles[0];
                    piles.erase(piles.begin());
                }
                else{
                    bob+=piles[piles.size()-1];
                    piles.pop_back();
                }
            }
        }
        if(alice>bob) return true;
        return false;
    }
};