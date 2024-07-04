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
    public ListNode mergeNodes(ListNode head) {
        ListNode current = head.next;
        ListNode curNext = current;
        
        while(curNext!=null){
            int sum = 0;
            while(curNext.val!=0){
                sum += curNext.val;
                curNext = curNext.next;
            }
            current.val = sum;
            curNext = curNext.next;
            current.next = curNext;
            current = current.next;
        }
        return head.next;
    }
}