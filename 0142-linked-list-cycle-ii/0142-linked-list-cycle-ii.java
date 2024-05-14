/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head == null) return null;
        int length = 0;
        ListNode s = head,f = head;
        while(f.next!=null && f.next.next!=null){
            f = f.next.next;
            s = s.next;
            if(s == f) break;
        }
        if(f.next == null || f.next.next == null) return null;
        ListNode temp = s;
        int count = 0;
        do{
            temp = temp.next;
            count++;
        }while(temp != s);
        
        ListNode first = head;
        ListNode sec = head;
        while(count>0){
            sec = sec.next;
            count--;
        }
        while(first != sec){
            first = first.next;
            sec = sec.next;
        }
        return first;
    }
}