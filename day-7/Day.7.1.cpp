struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if (!head || !head->next || k == 0) return head;
    
            ListNode* current = head;
            int length = 1;
            while (current->next) {
                current = current->next;
                length++;
            }
    
            current->next = head;
            
            k %= length;
            int stepsToNewTail = length - k;
            current = head;
            for (int i = 0; i < stepsToNewTail - 1; ++i) {
                current = current->next;
            }
            ListNode* newHead = current->next;
            current->next = nullptr;
    
            return newHead;
        }
    };
    