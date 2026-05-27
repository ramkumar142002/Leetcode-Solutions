class Solution {
    public int numberOfSpecialChars(String word) {
        int n = word.length();
        int[] small = new int[26];
        int[] cap = new int[26];
        int[] isValid = new int[26];

        int count = 0;
        for(int i = 0;i<n;i++){
            char c = word.charAt(i);
            if(c > 96){
                small[c - 'a']++;
                int ind = c - 'a';
                if(cap[ind]>0 && isValid[ind]>0){
                    isValid[ind] = -1;
                }
            }
            else{
                int ind = c - 'A';
                cap[c - 'A']++;
                if(small[ind] > 0 && isValid[ind]>-1){
                    isValid[ind]++;
                    System.out.println(c);
                }
                else if(small[ind] == 0){
                    isValid[ind] = -1;
                }
                
            }
        }
        for(int i = 0;i<26;i++){
            if(small[i]>0 && cap[i]>0 && isValid[i]>0){
                count++;
            }
        }
        return count;
    }
}