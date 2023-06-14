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
    ListNode* reverseList(ListNode* head) {vector<int> a;
        ListNode *b;
        b=head;
        while(b!=NULL){
            a.push_back(b->val);
            b=b->next;
        }
        b=head;
        reverse(a.begin(),a.end());
        for(int x:a){
            b->val=x;
            b=b->next;
        }
        return head;
    }
};