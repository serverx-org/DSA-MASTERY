# Singly Linked List Insertion Algorithms in JavaScript

In a singly linked list, nodes can be inserted at different positions in the list. Here, we'll explore three common insertion algorithms:

## 1. Insert at the Beginning

To insert a node at the beginning of the linked list, create a new node with the given data and set its `next` pointer to the current head of the list.

```javascript
insertFirst(data) {
    this.head = new Node(data, this.head);
}
```
This algorithm has a constant time complexity (O(1)), as it involves updating the head pointer only.

## 2. Insert at the End
To insert a node at the end of the linked list, create a new node with the given data and traverse the list to find the last node. Update the next pointer of the last node to point to the new node.

```javascript
insertLast(data) {
    const newNode = new Node(data);
    if (!this.head) {
        this.head = newNode;
        return;
    }

    let current = this.head;
    while (current.next) {
        current = current.next;
    }
    current.next = newNode;
}
```
The time complexity of this algorithm is O(n), where n is the number of nodes in the list, as it involves traversing the entire list.

## 3. Insert at a Specific Position
To insert a node at a specific position in the linked list, create a new node with the given data and traverse the list to find the node at the specified position. Update the next pointer of the previous node to point to the new node, and set the next pointer of the new node to the current node.

```javascript
insertAt(data, position) {
    if (position === 0) {
        this.insertFirst(data);
        return;
    }

    const newNode = new Node(data);
    let current = this.head;
    let count = 0;
    let previous = null;

    while (count < position && current) {
        previous = current;
        current = current.next;
        count++;
    }

    if (count < position) {
        // Handle invalid position
        return;
    }

    newNode.next = current;
    previous.next = newNode;
}
```
## Conclution
The time complexity of this algorithm is O(n), where n is the number of nodes in the list, as it involves traversing to the specified position.
These insertion algorithms provide flexibility for adding nodes at different points in a singly linked list based on specific requirements.