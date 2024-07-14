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
    ListNode* rev(ListNode* Head){
        if(Head == NULL || Head->next == NULL) return Head;
        ListNode *prev = nullptr, *temp = Head, *next = temp->next;
        while(temp){
            temp->next = prev;
            prev = temp; 
            temp = next;
            if(next) next = next->next;
        }
        return prev;
    }
    int getDecimalValue(ListNode* Head) {
        ListNode* temp = rev(Head);
        int exp = 1, ans = 0; 

        while(temp){
            ans += temp->val * exp;
            exp *= 2;
            temp = temp->next;
        }
        // cout << sum;
        return ans;
    }
};