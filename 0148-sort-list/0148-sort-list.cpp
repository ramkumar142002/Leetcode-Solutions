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
    ListNode* sortList(ListNode* head) {vector<int> v;
    ListNode *a;
    a=head;
    while(a!=NULL){
        v.push_back(a->val);
        a=a->next;
    }
    sort(v.begin(),v.end());
    // ListNode *b=head;
    a=head;
    for(int i=0;i<v.size();i++){
        a->val=v[i];
        a=a->next;
    }  
    return head;
    }
};