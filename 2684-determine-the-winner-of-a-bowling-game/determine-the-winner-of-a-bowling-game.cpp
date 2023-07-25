class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int p1=0;int p2=0;
        for(int i=0;i<player1.size();i++){
            if(i<1){
                p1=p1+player1[i];
                p2=p2+player2[i];
            }
            else if(i==1){
                if(player1[i-1]==10) p1=p1+2*player1[i];
                else p1=p1+player1[i];
                if(player2[i-1]==10) p2=p2+2*player2[i];
                else p2=p2+player2[i];
            }
            else{
                if(player1[i-1]==10 || player1[i-2]==10) p1=p1+2*player1[i];
                else p1=p1+player1[i];
                if(player2[i-1]==10 || player2[i-2]==10) p2=p2+2*player2[i];
                else p2=p2+player2[i];
            }
        }
        cout<<p1<<" "<<p2<<endl;
        if(p1==p2) return 0;
        return p1>p2?1:2;
    }
};