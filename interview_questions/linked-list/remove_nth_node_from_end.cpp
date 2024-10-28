// Title: Remove N-th Node from End of List
// Problem: Given the head of a linked list, remove the N-th node from the end of the list.


#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* first = dummy;
    ListNode* second = dummy;

    // Move first n+1 steps ahead
    for (int i = 0; i <= n; ++i) {
        first = first->next;
    }

    // Move both pointers until first reaches the end
    while (first) {
        first = first->next;
        second = second->next;
    }

    // Skip the desired node
    second->next = second->next->next;

    return dummy->next;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, nodes, value;
    cout << "Enter the number of nodes: ";
    cin >> nodes;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    cout << "Enter values for each node: ";
    for (int i = 0; i < nodes; ++i) {
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

    cout << "Enter the value of n (from end): ";
    cin >> n;

    head = removeNthFromEnd(head, n);
    cout << "List after removing " << n << "-th node from end: ";
    printList(head);

    return 0;
}
