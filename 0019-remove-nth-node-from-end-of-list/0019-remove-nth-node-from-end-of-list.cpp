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
        ListNode* prev = nullptr, *temp = head, *next = nullptr;
        while(temp){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 0 || head == NULL) return head;

        if(n == 1){
            if(head == NULL || head->next == NULL) return NULL;
            ListNode* temp = head;
            while(temp->next->next) temp = temp->next;
            delete temp->next;
            temp->next = nullptr;
            return head;
        }
        
        ListNode *tHead = rev(head), *temp = tHead, *del;
        int c = 1;
        while(temp && c < n - 1) {
            temp = temp->next;
            c++;
        }
        del = temp->next;
        temp->next = del->next;
        delete del;
        head = rev(tHead);
            // cout << temp->val << " ";
        return head;
    }
};