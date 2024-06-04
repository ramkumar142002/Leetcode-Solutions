class Solution {
    public int longestPalindrome(String s) {
        HashSet<Character> st = new HashSet<Character>();
        int count = 0;
        for(int i = 0;i<s.length();i++){
            if(st.contains(s.charAt(i))){
                count++;
                st.remove(s.charAt(i));
            }
            else{
                st.add(s.charAt(i));
            }
        }
        if(!st.isEmpty()) return count*2 + 1;
        return count*2;
    }
}