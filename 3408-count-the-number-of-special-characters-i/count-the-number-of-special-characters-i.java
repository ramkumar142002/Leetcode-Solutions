class Solution {
    public int numberOfSpecialChars(String word) {
        int[] caps = new int[26];
        int[] small = new int[26];

        int count = 0;

        for(int i = 0;i<word.length();i++){
            char c = word.charAt(i);
            if(c > 96){
                caps[c - 97]++;
            }
            else{
                small[c - 65]++;
            }
        }
        System.out.println(Arrays.toString(caps));

        for(int i = 0;i<caps.length;i++){
            if(caps[i]>0 && small[i]>0){
                count++;
            }
        }
        return count;
    }
}