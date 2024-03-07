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
    ListNode* middleNode(ListNode* head) {
        ListNode* a=head;
        int x=0;
        while(a!=NULL){
            x++;
            a=a->next;
        }
        a=head;
        
        for(int i=0;i<x/2;i++){
            a=a->next;
        }
        return a;
    }
};