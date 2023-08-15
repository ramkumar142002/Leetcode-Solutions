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
    ListNode* partition(ListNode* head, int x) {
        ListNode* a=head;
        vector<int> z,y;
        while(a!=NULL){
            if(a->val<x) z.push_back(a->val);
            else y.push_back(a->val);
            a=a->next;
        }
        z.insert(z.end(),y.begin(),y.end());
        a=head;
        int i=0;
        while(i<z.size()){
            a->val=z[i];
            a=a->next;
            i++;
        }
        return head;
    }
};