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
    bool isPalindrome(ListNode* head) {vector<int> a;
        if(head==NULL) return false;
        
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }

        int l=a.size();

        for(int i=0;i<l/2;i++){
            if(a[i]!=a[l-i-1]) return false;
        }
        return true;
    }
};