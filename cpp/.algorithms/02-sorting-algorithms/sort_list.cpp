// Given the head of a linked list, return the list after sorting it in ascending order.
// Example-
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

ListNode *sortList(ListNode *head)
{
    ListNode *temp = head;
    vector<int> ans;
    while (temp)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }
    sort(ans.begin(), ans.end());
    ListNode *t = new ListNode(-1);
    ListNode *p = t;
    for (int i = 0; i < ans.size(); i++)
    {
        ListNode *pp = new ListNode(ans[i]);
        p->next = pp;
        pp = pp->next;
        p = p->next;
    }
    return t->next;
}

void printList(ListNode *head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Creating the linked list: 4 -> 2 -> 1 -> 3
    ListNode *head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    
    cout << "Original list: ";
    printList(head);
    
    // Sorting the list
    ListNode *sortedHead = sortList(head);
    
    cout << "Sorted list: ";
    printList(sortedHead);

    return 0;
}
