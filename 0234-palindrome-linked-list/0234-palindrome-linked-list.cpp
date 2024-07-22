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
    ListNode* rev(ListNode* head){
        ListNode *prev = NULL, *curr = head, *next = curr->next;
        while(next){
            curr->next = prev;
            prev = curr;
            curr = next;
            next = next->next;
        }
          curr->next = prev;
          return curr;
    }

    bool isPalindrome(ListNode* head) {
        if(!head) return false;
        if(head && !head -> next) return true;
        if(!head->next->next) return head->val == head->next->val;

        ListNode *slow = head, *fast = head;
        while(fast && fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* R = rev(slow->next);
        ListNode* temp = head;
        while(R){
            if(R->val != temp->val) return false;
            R = R->next;
            temp = temp->next;
        }
        return true;
    }
};