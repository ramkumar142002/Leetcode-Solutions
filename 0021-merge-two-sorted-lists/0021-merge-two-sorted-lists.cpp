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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode* list3=new ListNode(0);
        struct ListNode* cur=list3;
        if(list1 == NULL && list2 == NULL)
        {
            return NULL;
        }
        else if(list1 == NULL){return list2;}
        else if(list2 == NULL){return list1;}

        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val <= list2->val){
                struct ListNode* t=new ListNode(list1->val);
                cur->next=t;
                cur=cur->next;
                list1=list1->next;
            }
            else {
                 struct ListNode* t=new ListNode(list2->val);
                cur->next=t;
                cur=cur->next;
                list2=list2->next;
            }
        }
        while(list1!=NULL)
        {
            struct ListNode* t=new ListNode(list1->val);
                cur->next=t;
                cur=cur->next;
                list1=list1->next;
        }
         while(list2!=NULL)
        {
            struct ListNode* t=new ListNode(list2->val);
                cur->next=t;
                cur=cur->next;
                list2=list2->next;
        }
        return list3->next;
    }
};