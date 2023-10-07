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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        
        while(temp!=NULL){
            ListNode* a=temp;
            while(a!=NULL && a->val==temp->val){
                a=a->next;
            }
            if(a==NULL){
                temp->next=NULL;
                return head;
            }
            else{
                temp->next=a;
                temp=temp->next;
            }
        }
        
        return head;
    }
};