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
    ListNode* swapNodes(ListNode* head, int k) {int c=0;int t=1;int s1,s2;
        ListNode* a=head;
        while(a!=NULL){
            c++;
            a=a->next;
        }a=head;
        int l=c-k+1;
        while(a!=NULL){
            if(t==k) s1=a->val;
            if(t==l) s2=a->val;
            a=a->next;
            t++;
        }
        t=1;
        a=head;
        while(a!=NULL){
            if(t==k) a->val=s2;
            if(t==l) a->val=s1;
            a=a->next;
            t++;
        }
        cout<<s1<<" "<<s2;
        return head;
    }
};