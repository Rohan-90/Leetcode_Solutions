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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* prev = new ListNode();
        prev->next = head;  
        unordered_map<int,ListNode*> m;
        int pSum = 0;
        m[0] = prev;
       
        while(head != NULL){
            pSum += head->val;
            if(m.find(pSum) != m.end()){
                ListNode* start = m[pSum];
                ListNode* temp = start;
                int prefixSum = pSum;
                while(temp != head){
                    temp = temp->next;
                    prefixSum += temp->val; 
                    if(temp != head) m.erase(prefixSum);
                }
                start->next = head->next;
            }
            else{
                m[pSum] = head;
            }
            head = head->next;
        }
        return prev->next;
    }
};