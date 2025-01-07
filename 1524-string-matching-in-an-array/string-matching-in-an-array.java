class Solution {
    public List<String> stringMatching(String[] words) {
        List<String> ans = new ArrayList<String>();
        for(int i = 0;i<words.length;i++){
            String c_word = words[i];
            for(int j = 0;j<words.length;j++){
                if(i!=j & words[j].contains(c_word) && !ans.contains(c_word)){
                    ans.add(c_word);
                }
            }
        }
        return ans;
    }
}