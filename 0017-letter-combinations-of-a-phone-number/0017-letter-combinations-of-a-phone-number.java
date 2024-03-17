class Solution {
    public List<String> letterCombinations(String digits) {
        if(digits.length() == 0){
            ArrayList<String> list = new ArrayList<String>();
            return list;
        }
        String[] mapping = new String[]{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        // String temp = "";
        return fun("",digits,mapping);
    }
    public List<String> fun(String temp,String digits,String[] mapping){
        if(digits.length() == 0){
            ArrayList<String> list = new ArrayList<>();
            list.add(temp);
            return list;
        }
        ArrayList<String> list = new ArrayList<>();
        
        int ind = (int)(digits.charAt(0) - '0') - 2;
        
        for(int i = 0;i<mapping[ind].length();i++){
            char ch = (char)(mapping[ind].charAt(i));
            // System.out.println(temp+ch);
            list.addAll(fun(temp+ch,digits.substring(1),mapping));
        }
        return list;
    }
}