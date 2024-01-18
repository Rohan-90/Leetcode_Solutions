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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        if(count == 1) return NULL;
        if(count == n) return head->next;
        ListNode* prev = head; 
        int del = count - n - 1;
        int num = 0;
        while(num < del){
            num++;
            prev = prev->next;
        }
        prev->next = prev->next->next;
        
        return head;
    }
};