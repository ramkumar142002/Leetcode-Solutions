class Solution {
    public boolean lemonadeChange(int[] bills) {
        int[] mp = new int[3];
        for(int i = 0;i<bills.length;i++){
            if(bills[i]==5){
                mp[0]++;
            }
            else if(bills[i] == 10){
                mp[1]++;
                if(mp[0]>0){
                    mp[0]--;
                }
                else return false;
            }
            else{
                mp[2]++;
                if(mp[0]>0 && mp[1]>0){
                    mp[0]--;
                    mp[1]--;
                }
                else if(mp[0]>2){
                    mp[0] -= 3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
}