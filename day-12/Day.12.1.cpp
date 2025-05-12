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
    // Utility function to calculate GCD
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            int a = curr->val;
            int b = curr->next->val;
            int g = gcd(a, b);

            // Create new node with GCD value
            ListNode* newNode = new ListNode(g);
            newNode->next = curr->next;
            curr->next = newNode;

            // Move to the node after the inserted one
            curr = newNode->next;
        }

        return head;
    }
};
