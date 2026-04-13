/**
 * Add Two Numbers using Linked List
 * 
 * I solved this problem by simulating how we do addition manually.
 * We go digit by digit, keep track of carry, and build a new list.
 */

#include <iostream>
using namespace std;

// Basic structure of ListNode
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy node to start the result list
        ListNode* head = new ListNode(0);
        ListNode* temp = head;

        int carry = 0;

        // Loop until both lists end and no carry left
        while (l1 != NULL || l2 != NULL || carry != 0) {

            int sum = carry;

            // Add value from first list if present
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add value from second list if present
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Update carry
            carry = sum / 10;

            // Create new node with current digit
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        // Return result (skip dummy node)
        return head->next;
    }
};

// Function to print list (for testing)
void display(ListNode* node) {
    while (node != NULL) {
        cout << node->val;
        if (node->next) cout << " -> ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    // First number: 342 (stored as 2 -> 4 -> 3)
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Second number: 465 (stored as 5 -> 6 -> 4)
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution s;
    ListNode* ans = s.addTwoNumbers(l1, l2);

    cout << "Final Answer: ";
    display(ans);

    return 0;
}