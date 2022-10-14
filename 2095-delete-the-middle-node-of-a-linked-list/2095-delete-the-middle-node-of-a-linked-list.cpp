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
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        int a;
        ListNode *y;
        y=head;
        while(y!=NULL)
        {
            // if(y->val!=NULL)
                n++;
            y=y->next;
        }
        if(n==1)
            return NULL;
        // if(n%2==0)
        //     a=(n/2)+1;
        // else
            a=n/2;
        y=head;
        for(int i=1;i<a;i++)
        {
            y=y->next;
        }
        y->next=y->next->next;
        return head;
    }
};
