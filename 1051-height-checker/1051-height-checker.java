class Solution {
    public int heightChecker(int[] heights) {
        int[] exp = Arrays.copyOf(heights,heights.length);
        int c = 0;
        Arrays.sort(exp);
        for(int i = 0;i<heights.length;i++){
            System.out.println(heights[i] + " " + exp[i]);
            if(heights[i] != exp[i]) c++;
        }   
        return c;
    }
}