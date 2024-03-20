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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* beginner1 = list1;
        ListNode* penUltimate1 = list1;
        ListNode* temp = list1;
        ListNode* end2 = list2;
        
        int i = 0;
        while(temp!=NULL){
            if(i+1 == a){
                beginner1 = temp;
            } 
            if(i == b){
                penUltimate1 = temp;
            }
            i++;
            temp = temp->next;
        }
        temp = list2;
        while(temp!=NULL){
            if(temp->next == NULL){
                end2 = temp;
            }
            temp = temp->next;
        }
        beginner1->next = list2;
        end2->next = penUltimate1->next;
        return list1;
    }
};