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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* iter = head;
        while (iter) {
            ListNode* run = iter->next;
            while (run && run->val == iter->val) {
                run = run->next;
            }
            iter->next = run;
            iter = run;
        }
        return head; 
    }
};
