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
    public ListNode sortList(ListNode head) {
        //mergeSort
        if(head==null || head.next==null){
            return head;
        }
        
        ListNode mid = getMid(head);
        ListNode left = sortList(head);
        ListNode right = sortList(mid);
        
        return merge(left,right);
    }
    public ListNode getMid(ListNode node){
        ListNode midPrev = null;
        while(node!=null && node.next!=null){
            midPrev = (midPrev == null) ? node : midPrev.next;
            node = node.next.next;
        }
        ListNode mid = midPrev.next;
        midPrev.next = null;
        return mid;
    }
    public ListNode merge(ListNode node1,ListNode node2){
        ListNode dummyHead = new ListNode();
        ListNode tail = dummyHead;
        while(node1!=null && node2!=null){
            if(node1.val<node2.val){
                tail.next = node1;
                tail = tail.next;
                node1 = node1.next;
            }
            else{
                tail.next = node2;
                tail = tail.next;
                node2 = node2.next;
            }
        }
        // while(node1!=null){
        //     tail.next = node1;
        //     node1 = node1.next;
        // }
        // while(node2!=null){
        //     tail.next = node2;
        //     node2 = node2.next;
        // }
        tail.next = (node1!=null) ? node1 : node2;
        return dummyHead.next;
    }
}