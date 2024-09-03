class Solution {
    public int getLucky(String s, int k) {
        HashMap<Integer,String> h = new HashMap<>();
        StringBuilder sb = new StringBuilder();
        for(int i = 0;i<s.length();i++){
            sb.append(s.charAt(i) - 'a' + 1);
        }
        int ans = 0;
        for(int i = 0;i<k;i++){
            int sum = 0;
            for(int x:sb.toString().toCharArray()){
                sum += (x-'0');
            }
            sb = new StringBuilder(String.valueOf(sum));
        }
        return Integer.parseInt(sb.toString());
    }
}