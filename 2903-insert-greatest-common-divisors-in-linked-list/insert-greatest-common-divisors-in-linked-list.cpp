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
    int gcd(int a,int b){
        int x=min(a,b);
        if(a%x==0 && b%x==0) return x;
        while(x>0){
            if(a%x==0 && b%x==0) return x;
            x--;
        }
        return x;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* a=head;
        while(a!=NULL && a->next!=NULL){
            ListNode* z=new ListNode;
            z->val=gcd(a->val,a->next->val);
            z->next=a->next;
            a->next=z;
            a=z;
            a=a->next;
        }
        return head;
    }
};