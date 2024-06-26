/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode balanceBST(TreeNode root) {
        ArrayList<TreeNode> arr = new ArrayList<>();
        inorder(root,arr);
        return fun(arr,0,arr.size()-1);
    }
    public void inorder(TreeNode root,ArrayList<TreeNode> arr){
        if(root == null) return;
        inorder(root.left,arr);
        arr.add(root);
        inorder(root.right,arr);
    }
    public TreeNode fun(ArrayList<TreeNode> arr,int i,int j){
        if(i>j) return null;
        int mid = (i+j)/2;
        TreeNode root = arr.get(mid);
        root.left = fun(arr,i,mid-1);
        root.right = fun(arr,mid+1,j);
        return root;
    }
}