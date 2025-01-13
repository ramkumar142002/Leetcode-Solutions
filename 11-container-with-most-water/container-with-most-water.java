class Solution {
    public int maxArea(int[] height) {
        int i = 0,j = height.length-1;
        int maxi = 0;
        while(i < j){
            maxi = Math.max(maxi, (j-i)*Math.min(height[j],height[i]));
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxi;
    }
}