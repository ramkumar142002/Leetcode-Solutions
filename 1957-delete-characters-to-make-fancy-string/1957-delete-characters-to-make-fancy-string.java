class Solution {
    public String makeFancyString(String s) {
        int len = 0;
        char prev = '$';
        StringBuilder str = new StringBuilder();
        for(int i = 0;i<s.length();i++){
            if(s.charAt(i) == prev){
                len++;
            }
            else{
                prev = s.charAt(i);
                len = 1;
            }
            if(len<3){
                str.append(s.charAt(i));
            }
        }
        return str.toString();
    }
}