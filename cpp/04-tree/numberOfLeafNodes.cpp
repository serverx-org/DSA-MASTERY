#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
// Function to insert nodes in the binary tree
Node *insertNode(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertNode(root->left, val);
    }
    else
    {
        root->right = insertNode(root->right, val);
    }
    return root;
}
// Function to count leaf nodes
int countLeafNodes(Node *root)
{
    if (root == nullptr)
        return 0;
    if (root->left == nullptr && root->right == nullptr)
        return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main()
{
    Node *root = nullptr;
    int n, val;
    cout << "Enter the number of nodes in the binary tree: ";
    cin >> n;
    cout << "Enter the values of nodes:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        root = insertNode(root, val);
    }
    int leafCount = countLeafNodes(root);
    cout << "Number of leaf nodes in the binary tree: " << leafCount << endl;
    return 0;
}

// Enter the number of nodes in the binary tree: 7
// Enter the values of nodes:
// 4 2 6 1 3 5 7
// Number of leaf nodes in the binary tree: 4
//        4
//       / \
//      2   6
//     / \ / \
//    1  3 5  7