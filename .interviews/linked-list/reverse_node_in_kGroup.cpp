// Title: Reverse Nodes in k-Group

// Problem: Given a linked list, reverse nodes in groups of k.
// Approach: Reverse every k nodes iteratively, then move to the next k nodes.

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* curr = head;
    int count = 0;
    while (curr && count < k) {
        curr = curr->next;
        count++;
    }
    if (count < k) return head;

    curr = head;
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    for (int i = 0; i < k; ++i) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = reverseKGroup(curr, k);
    return prev;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, k, value;
    cout << "Enter the number of nodes: ";
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

    cout << "Enter value of k: ";
    cin >> k;

    ListNode* newHead = reverseKGroup(head, k);
    cout << "List after reversing every k group: ";
    printList(newHead);

    return 0;
}