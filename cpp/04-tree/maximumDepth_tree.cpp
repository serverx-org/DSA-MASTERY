#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(NULL), right(NULL) {}
};
// Function to calculate maximum depth
int maxDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return max(leftDepth, rightDepth) + 1;
    }
}
// Function to insert nodes in level order
TreeNode *insertLevelOrder(int arr[], int n)
{
    if (n == 0)
        return NULL;
    TreeNode *root = new TreeNode(arr[0]);
    queue<TreeNode *> q;
    q.push(root);
    int i = 1;
    while (i < n)
    {
        TreeNode *temp = q.front();
        q.pop();
        // Insert left child
        if (i < n)
        {
            temp->left = new TreeNode(arr[i++]);
            q.push(temp->left);
        }
        // Insert right child
        if (i < n)
        {
            temp->right = new TreeNode(arr[i++]);
            q.push(temp->right);
        }
    }
    return root;
}

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    int arr[n];
    cout << "Enter node values in level order (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Insert nodes in level order
    TreeNode *root = insertLevelOrder(arr, n);
    // Calculate maximum depth
    int depth = maxDepth(root);
    cout << "Maximum Depth of the Binary Tree: " << depth << endl;
    return 0;
}

// Enter number of nodes: 7
// Enter node values in level order (use -1 for NULL nodes): 1 2 3 -1 -1 4 5
// Maximum Depth of the Binary Tree: 3
//        1
//       / \
//      2   3
//         / \
//        4   5