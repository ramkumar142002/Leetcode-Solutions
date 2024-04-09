class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count = 0;
        while(tickets[k]!=0){
            for(int i = 0;i<tickets.size();i++){
                if(i==k && tickets[i] == 1){
                    count++;
                    return count;
                }
                if(tickets[i]>0){
                    count++;
                    tickets[i]--;
                }
            }
        }
        return count;
    }
};