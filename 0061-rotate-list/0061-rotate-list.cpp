/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy = head;
        
        int cnt = 0;
        while(dummy!=NULL){
            dummy = dummy->next;
            cnt++;
        }
        dummy = head;
        if(k>cnt) k = k%cnt;
        
        for(int i =0;i<k;i++){
            while(dummy->next!=NULL && dummy->next->next!=NULL){
                dummy = dummy->next;
            }
//             
            ListNode* temp = new ListNode(dummy->next->val);
            temp->next = head;
            head = temp;
            dummy->next = NULL;
            dummy = head;
            
        }
        return head;
    }
};