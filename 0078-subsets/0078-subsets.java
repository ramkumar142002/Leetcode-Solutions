class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        
        
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        // vector<int> flag(nums.size(),0);
        fun(nums,0,ans,temp);
        return ans;
    }
        
     public static void fun(int[] nums,int ind,List<List<Integer>> ans,List<Integer> temp){
        if(ind==nums.length){
            ans.add(new ArrayList<>(temp));
            return;
        }
        temp.add(nums[ind]);
        fun(nums,ind+1,ans,temp);

        temp.remove(temp.size()-1);
        fun(nums,ind+1,ans,temp);

    }
    
}