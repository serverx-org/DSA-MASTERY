#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the binary tree
Node *insertNode(Node *root, int data)
{
    if (!root)
    {
        return new Node(data);
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (!temp->left)
        {
            temp->left = new Node(data);
            break;
        }
        else
        {
            q.push(temp->left);
        }

        if (!temp->right)
        {
            temp->right = new Node(data);
            break;
        }
        else
        {
            q.push(temp->right);
        }
    }
    return root;
}

// Function to perform level order traversal
void levelOrderTraversal(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    cout << endl;
}

int main()
{
    Node *root = nullptr;
    int n, data;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the node values:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> data;
        root = insertNode(root, data);
    }
    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);

    return 0;
}


// Enter the number of nodes: 5
// Enter the node values:
// 1 2 3 4 5
// Level Order Traversal: 1 2 3 4 5
//     1
//       / \
//      2   3
//     / \
//    4   5