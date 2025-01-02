class Solution {
    public int[] vowelStrings(String[] words, int[][] queries) {
        int[] prefixSum = new int[words.length+1];
        Arrays.fill(prefixSum,0);
        HashSet<Character> hs = new HashSet<>(Arrays.asList('a','e','i','o','u'));
        for(int i = 0;i<words.length;i++){
            prefixSum[i+1] = prefixSum[i];
            if(hs.contains(words[i].charAt(0)) && hs.contains(words[i].charAt(words[i].length()-1))){
                prefixSum[i+1]++;
            }
        }
        System.out.println(Arrays.toString(prefixSum));
        int[] ans = new int[queries.length];
        for(int i = 0;i<queries.length;i++){
            ans[i] = prefixSum[queries[i][1]+1] - prefixSum[queries[i][0]];
        }
        return ans;
    }
}