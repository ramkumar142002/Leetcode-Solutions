class Solution {
    public int findCircleNum(int[][] isConnected) {
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
        for(int i = 0;i<isConnected.length;i++){
            adj.add(new ArrayList<Integer>());
        }
        for(int i = 0;i<isConnected.length;i++){
            for(int j = 0;j<isConnected.length;j++){
                if(isConnected[i][j] == 1 && i!=j){
                    adj.get(i).add(j);
                    adj.get(j).add(i);
                }
            }
        }
        boolean[] vis = new boolean[isConnected.length];
        int count = 0;
        for(int it = 0;it<isConnected.length;it++){
            if(!vis[it]){
                count++;
                dfs(it,adj,vis);
            }
        }
        return count;
    }
    
    public void dfs(int node,ArrayList<ArrayList<Integer>> adj,boolean[] vis){
        vis[node] = true;
        
        for(Integer it : adj.get(node)){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
}