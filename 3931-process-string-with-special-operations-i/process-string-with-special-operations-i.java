class Solution {
    public String processStr(String s) {
        StringBuilder ans = new StringBuilder();
        for(int i = 0;i<s.length();i++){
            if(s.charAt(i) == '#'){
                ans.append(ans);
            }
            else if(s.charAt(i) == '*'){
                if(ans.length()>0){
                    ans.deleteCharAt(ans.length() - 1);
                }
            }
            else if(s.charAt(i) == '%'){
                ans.reverse();
            }
            else if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                ans.append(s.charAt(i));
            }
        }
        return ans.toString();
    }
}