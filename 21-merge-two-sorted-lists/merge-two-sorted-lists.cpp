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
        ListNode* temp = list1;
        ListNode* curr = list2;
        ListNode* ans = new ListNode(0);
        ListNode* tail = ans;
        while(temp != NULL && curr != NULL){
            if(temp->val < curr->val){
                tail->next = temp;
                temp = temp->next;
            }
            else{
                tail->next = curr;
                curr = curr->next;
            }
            tail = tail->next;
        }
        if(temp != NULL) tail->next = temp;
        else if(curr != NULL) tail->next = curr;

        return ans->next;
    }
};