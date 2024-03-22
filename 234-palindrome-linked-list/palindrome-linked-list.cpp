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
    ListNode* solve(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* ptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ptr;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = solve(slow);
        while(temp != NULL){
            if(head->val != temp->val) return false;
            temp = temp->next;
            head = head->next;
        } 
        return true;
    }
};