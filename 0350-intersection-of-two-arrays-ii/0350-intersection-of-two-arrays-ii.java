class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int i = 0,j = 0;
        ArrayList<Integer> nums3 = new ArrayList<Integer>();
        while(i<nums1.length && j<nums2.length){
            if(nums1[i] == nums2[j]){
                nums3.add(nums1[i]);
                i++;j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else i++;
        }
        int[] arr = new int[nums3.size()];
        for(int k = 0;k<nums3.size();k++){
            arr[k] = nums3.get(k);
        }
        return arr;
    }
}