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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> odd;
        vector<int> even;
        ListNode* o = head;
        ListNode* e = head->next;
        while(o!=NULL && o->next!=NULL){
            odd.push_back(o->val);
            o = o->next->next;
        }
        if(o) odd.push_back(o->val);
        while(e!=NULL && e->next!=NULL){
            even.push_back(e->val);
            e = e->next->next;
        }
        if(e) even.push_back(e->val);
        o = head;int i = 0;
        while(i<odd.size()){
            o->val = odd[i];
            o = o->next;
            i++;
        }
        i = 0;
        while(i<even.size()){
            o->val = even[i];
            o = o->next;
            i++;
        }
        return head;
    }
};