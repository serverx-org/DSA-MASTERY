#include <bits/stdc++.h>
using namespace std;

// Define the structure for the binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to insert nodes in the binary tree
Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to perform postorder traversal of the binary tree
void postorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    // Traverse the left subtree
    postorderTraversal(root->left);
    // Traverse the right subtree
    postorderTraversal(root->right);
    // Visit the root node
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;
    int n, value;
    // Take the number of nodes to be inserted
    cout << "Enter the number of nodes: ";
    cin >> n;
    // Insert nodes into the binary tree
    for (int i = 0; i < n; i++) {
        cout << "Enter value of node " << (i + 1) << ": ";
        cin >> value;
        root = insertNode(root, value);
    }
    // Perform postorder traversal
    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}

// Enter the number of nodes: 5
// Enter value of node 1: 10
// Enter value of node 2: 5
// Enter value of node 3: 20
// Enter value of node 4: 3
// Enter value of node 5: 7
// Postorder Traversal: 3 7 5 20 10