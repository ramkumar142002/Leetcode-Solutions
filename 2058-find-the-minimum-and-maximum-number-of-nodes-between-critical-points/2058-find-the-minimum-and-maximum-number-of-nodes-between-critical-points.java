/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {
        // if(head == null || head.next==null || head.next.next == null) return new int[]{-1,-1};
        ArrayList<Integer> index = new ArrayList<Integer>();
        ListNode temp = head.next;
        int prev = head.val;
        int curInd = 1;
        while(temp.next!=null){
            if(temp.val>prev && temp.val>temp.next.val){
                index.add(curInd);
            }
            else if(temp.val<prev && temp.val<temp.next.val){
                index.add(curInd);
            }
            prev  = temp.val;
            temp = temp.next;
            curInd++;
        }
        if(index.size()==0 || index.size()==1)  return new int[]{-1,-1};
        System.out.println(index);
        
        Collections.sort(index);
        
        int maxDiff = index.get(index.size()-1) - index.get(0);
        int minDiff = Integer.MAX_VALUE;
        for(int i = 0;i<index.size()-1;i++){
            minDiff = Math.min(minDiff,index.get(i+1) - index.get(i));
        }
        return new int[]{minDiff,maxDiff};
    }
}