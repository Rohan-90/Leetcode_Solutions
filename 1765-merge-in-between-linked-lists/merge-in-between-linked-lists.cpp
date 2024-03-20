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
        ListNode* temp = list1;
      
        int track = 1;
        while(track != a){ 
            temp = temp->next;
            track++;
        }
    
        ListNode* temp2 = temp;
       for(int i = 0; i < b - a + 2; i++) temp2 = temp2->next;

        temp->next = list2;
        ListNode* curr = list2;
        while(curr->next != NULL){
            curr = curr->next;
        }

        curr->next = temp2;
        return list1;
    }
};