/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        // if(head==NULL) return false;
        // ListNode* slow = head;ListNode* fast = head;
        // if(slow->next == NULL || fast->next->next==NULL) return false;
        // slow = slow->next;
        // fast = fast->next->next;
        // while(slow!=fast){
        //     slow = slow->next;
        //     if(fast->next==NULL || fast->next->next==NULL) return false;
        //     else fast = fast->next->next;
        // }
        // return true;
        
        if(head==NULL) return false;
        ListNode* slow = head;ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};