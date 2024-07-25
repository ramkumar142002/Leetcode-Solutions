class Solution {
    public int[] sortArray(int[] nums) {
        mergeSort(nums,0,nums.length-1);
        return nums;
    }
    public void mergeSort(int[] nums,int low,int high){
        if(low<high){
            int mid = low + (high-low)/2;
            mergeSort(nums,low,mid);
            mergeSort(nums,mid+1,high);
            merge(nums,low,mid,high);
        }
    }
    public void merge(int[] nums,int low,int mid,int high){
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int i = low,j = mid+1;
        while(i<=mid && j<=high){
            if(nums[i]<nums[j]){
                arr.add(nums[i]);
                i++;
            }
            else{
                arr.add(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            arr.add(nums[i]);
            i++;
        }
        while(j<=high){
            arr.add(nums[j]);
            j++;
        }
        
        for(int k = low;k<=high;k++){
            nums[k] = arr.get(k-low);
        }
    }
}