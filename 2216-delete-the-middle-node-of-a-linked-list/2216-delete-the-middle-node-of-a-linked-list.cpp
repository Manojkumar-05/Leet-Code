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
        if(head == NULL || head->next == NULL) return NULL;
        if(head->next->next == NULL) {
            delete head->next;
            head->next = nullptr;
            return head;
        }
        ListNode *fast = head, *slow = head, *prev = nullptr;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        // if(fast->next != NULL){prev = slow; slow = slow->next;}
        prev->next = slow->next;
        delete slow;
        return head;
    }

};