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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        // 1. Find the tail and calculate length
        int n = 1;
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
            n++;
        }

        // 2. Connect tail to head to form a cycle
        tail->next = head;

        // 3. Handle k larger than list length
        k = k % n;
        
        // 4. Find the new tail split position
        int stepsToNewTail = n - k;
        for (int i = 0; i < stepsToNewTail; i++) {
            tail = tail->next;
        }

        // 5. Break the cycle and assign new head
        head = tail->next;
        tail->next = nullptr;

        return head;
    }
}; // Make sure this bracket and semicolon are present!
