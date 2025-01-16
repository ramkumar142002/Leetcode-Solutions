class Solution {
    public int xorAllNums(int[] nums1, int[] nums2) {
        int xor = 0;
        int xor1 = 0, xor2 = 0;
        for(int i = 0;i<nums1.length;i++){
            xor1 ^= nums1[i];
        }
        for(int j = 0;j<nums2.length;j++){
            xor2 ^= nums2[j];
        }
        if(nums1.length%2 != 0){
            xor ^= xor2;
        }
        if(nums2.length % 2 != 0){
            xor ^= xor1;
        }
        return xor;
    }
}