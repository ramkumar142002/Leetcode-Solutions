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
    int pairSum(ListNode* head) {
        ListNode* a=head;vector<int> b;
        int c=0;
        while(a!=NULL){
            b.push_back(a->val);
            a=a->next;
        }
        int i=0;int j=b.size()-1;
        while(i<j){
            if(b[i]+b[j]>c) c=b[i]+b[j];
            i++;
            j=b.size()-1-i;
        }
        return c;
    }
};