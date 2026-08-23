/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Base Case: If the list has 0 or 1 node, returning nullptr 
        // lets LeetCode safely handle the memory cleanup.
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        // Use standard slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;      
        ListNode* prev = nullptr;

        // Move fast by two steps and slow by one step
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // 'slow' is the middle node. Bypass it using 'prev'.
        prev->next = slow->next;

        // Delete the bypassed node to prevent a memory leak
        delete slow; 
        
        return head; 
    }
};
