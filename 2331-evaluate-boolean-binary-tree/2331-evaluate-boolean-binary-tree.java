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
    public boolean fun(TreeNode root){
        if(root==null) return false;
        if(root.left==null && root.right==null){
            return (root.val == 1);
        }
        
        if(root.val == 2){
            return fun(root.left) | fun(root.right);
        }
        if(root.val == 3){
            return fun(root.left) & fun(root.right);
        }
        return false;
    }
    public boolean evaluateTree(TreeNode root) {
        return fun(root);
    }
}