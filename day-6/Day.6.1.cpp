#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        
        ListNode* current = dummy;

        while (current->next != nullptr) {
            if (current->next->val == val) {
                
                ListNode* toDelete = current->next;
                current->next = current->next->next;
                delete toDelete;  
            } else {
                current = current->next;
            }
        }

        ListNode* result = dummy->next;
        delete dummy;  
        return result;
    }
};
