class Solution {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        fun(n,k,ans,temp,0);
        
        return ans;
    }
    public void fun(int n,int k,List<List<Integer>> ans,List<Integer> temp,int prev){
        
        if(k==0){
            ans.add(new ArrayList<Integer>(temp));
            return ;
        }
        for(int i = prev+1;i<=n;i++){
            temp.add(i);
            // for(int j: temp){
            //     System.out.println(j);
            // }
            fun(n,k-1,ans,temp,i);
            temp.remove(temp.size()-1);
        }
    }
}