// Title: Find the Middle of a Linked List

// Problem: Find the middle node of a linked list. If there are two middle nodes, return the second one.
// Approach: Use two pointers, one moving one step at a time (slow) and the other moving two steps at a time (fast).


#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* findMiddle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    int n, value;
    cout << "Enter the number of nodes in the list: ";
    cin >> n;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    cout << "Enter values for each node: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        ListNode* newNode = new ListNode(value);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    ListNode* middleNode = findMiddle(head);
    cout << "The middle node's value is: " << middleNode->val << endl;

    return 0;
}
