class Solution {
    
    public String firstPalindrome(String[] words) {
        for(int i = 0;i<words.length;i++){
            if(fun(words[i])) return words[i];
        }
        return "";
    }
    public Boolean fun(String s){
        for(int i = 0;i<s.length()/2;i++){
            if(s.charAt(i) != s.charAt(s.length() - i -1)) return false;
        }
        return true;
    }
}