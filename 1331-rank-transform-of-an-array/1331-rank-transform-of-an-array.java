class Solution {
    public int[] arrayRankTransform(int[] arr) {
        // Create a TreeSet to store unique elements in sorted order
        Set<Integer> set = new TreeSet<>();
        for (int num : arr) {
            set.add(num);
        }
        
        // Create a mapping from each number to its rank
        Map<Integer, Integer> rankMap = new HashMap<>();
        int rank = 1;
        for (int num : set) {
            rankMap.put(num, rank++);
        }
        
        // Create the result array based on the rank mapping
        int[] ans = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            ans[i] = rankMap.get(arr[i]);
        }
        
        return ans;
    }
}