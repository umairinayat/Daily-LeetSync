// Last updated: 23/12/2025, 00:15:10
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
    ListNode* middleNode(ListNode* head) {
        ListNode *fast, *slow;
        fast = head;
        slow= head;
        while(fast && fast->next){
            slow = slow->next; 
            fast= fast->next->next; 

        }
        return slow;
    }
};