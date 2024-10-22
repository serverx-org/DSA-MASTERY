#include <bits/stdc++.h>
using namespace std;

// Definition of a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to perform preorder traversal
void preorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    // Visit the root node
    cout << root->val << " ";
    // Traverse the left subtree
    preorderTraversal(root->left);
    // Traverse the right subtree
    preorderTraversal(root->right);
}

// Function to create a binary tree from user input
TreeNode* createTree() {
    int val;
    cout << "Enter node value (-1 for NULL): ";
    cin >> val;
    // Base case for recursion
    if (val == -1) return NULL;
    // Create a new node with the given value
    TreeNode* root = new TreeNode(val);
    // Recursively create the left and right subtrees
    cout << "Enter left child of " << val << ": ";
    root->left = createTree();
    cout << "Enter right child of " << val << ": ";
    root->right = createTree();
    return root;
}

int main() {
    // Create the binary tree
    TreeNode* root = createTree();
    // Perform preorder traversal
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    return 0;
}

// Enter node value (-1 for NULL): 1
// Enter left child of 1: 2
// Enter left child of 2: -1
// Enter right child of 2: -1
// Enter right child of 1: 3
// Enter left child of 3: -1
// Enter right child of 3: -1
// Preorder Traversal: 1 2 3