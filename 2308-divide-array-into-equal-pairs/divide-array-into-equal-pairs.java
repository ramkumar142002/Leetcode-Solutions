class Solution {
    public boolean divideArray(int[] nums) {
        HashMap<Integer,Integer> hs = new HashMap<>();
        for(int a : nums){
            hs.put(a, hs.getOrDefault(a,0)+1);
        }
        for (Map.Entry<Integer, Integer> entry : hs.entrySet()) {
            if (entry.getValue() % 2 != 0) {
                return false;
            }
        }
        return true;
    }
}