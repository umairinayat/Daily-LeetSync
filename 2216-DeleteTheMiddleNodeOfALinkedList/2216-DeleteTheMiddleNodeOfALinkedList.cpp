// Last updated: 23/12/2025, 00:15:02
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * fast= head;
        ListNode * slow= head;
        ListNode * pre= NULL;
        while(fast != NULL && fast->next !=NULL){
            pre= slow;
            slow= slow->next;
            fast= fast->next->next;

        }
        if(pre!=NULL){
            pre->next= slow->next;
        }else{
            head= head->next;
        }

        return head;
    }
};