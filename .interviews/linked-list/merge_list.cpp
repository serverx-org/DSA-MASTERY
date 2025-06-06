// Title: Merge Two Sorted Linked Lists

// Problem: Given two sorted linked lists, merge them into a single sorted linked list.
// Approach: Use a two-pointer approach to compare nodes and merge them into a new list.


#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* createList(int n) {
    int value;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    cout << "Enter values in sorted order: ";
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
    return head;
}

int main() {
    int n1, n2;
    cout << "Enter number of nodes in first sorted list: ";
    cin >> n1;
    ListNode* l1 = createList(n1);

    cout << "Enter number of nodes in second sorted list: ";
    cin >> n2;
    ListNode* l2 = createList(n2);

    ListNode* mergedHead = mergeTwoLists(l1, l2);
    cout << "Merged list: ";
    printList(mergedHead);

    return 0;
}
