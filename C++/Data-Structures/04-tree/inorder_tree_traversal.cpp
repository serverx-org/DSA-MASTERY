#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert a node in a Binary Search Tree (BST)
TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL) {
        return new TreeNode(val);
    }
    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Inorder Traversal of the Binary Tree
void inorderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);  // Traverse left subtree
    cout << root->val << " ";      // Visit node
    inorderTraversal(root->right); // Traverse right subtree
}

int main() {
    TreeNode* root = NULL;
    int n, val;
    // Taking number of elements as input
    cout << "Enter the number of nodes: ";
    cin >> n;
    // Taking node values as input
    cout << "Enter the values of the nodes:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val); // Insert each value in the BST
    }
    // Performing inorder traversal
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;
    return 0;
}

// Enter the number of nodes: 5
// Enter the values of the nodes:
// 4 2 5 1 3
// Inorder Traversal: 1 2 3 4 5