# Doubly Linked List Insertion Algorithms in JavaScript

In a doubly linked list, nodes can be inserted at different positions in the list. Here, we'll explore three common insertion algorithms:

## 1. Insert at the Beginning

To insert a node at the beginning of the doubly linked list, create a new node with the given data. Update the `next` pointer of the new node to point to the current head, and update the `prev` pointer of the current head to point to the new node.

```javascript
insertFirst(data) {
    const newNode = new Node(data, this.head, null);
    if (this.head) {
        this.head.prev = newNode;
    } else {
        this.tail = newNode;
    }
    this.head = newNode;
}
```
This algorithm has a constant time complexity (O(1)), as it involves updating the head pointer only.

## 2. Insert at the End
To insert a node at the end of the doubly linked list, create a new node with the given data. Update the next pointer of the last node to point to the new node, and update the prev pointer of the new node to point to the last node.

```javascript
insertLast(data) {
    const newNode = new Node(data, null, this.tail);
    if (this.tail) {
        this.tail.next = newNode;
    } else {
        this.head = newNode;
    }
    this.tail = newNode;
}
```
The time complexity of this algorithm is O(1), as it involves updating the tail pointer only.

## 3. Insert at a Specific Position
To insert a node at a specific position in the doubly linked list, create a new node with the given data. Traverse the list to find the node at the specified position. Update the next pointer of the new node to point to the current node, update the prev pointer of the new node to point to the previous node, and update the next pointer of the previous node to point to the new node.

```javascript
insertAt(data, position) {
    if (position === 0) {
        this.insertFirst(data);
        return;
    }

    const newNode = new Node(data, null, null);
    let current = this.head;
    let count = 0;

    while (count < position && current) {
        current = current.next;
        count++;
    }

    if (count < position) {
        // Handle invalid position
        return;
    }

    newNode.prev = current.prev;
    newNode.next = current;
    current.prev.next = newNode;
    current.prev = newNode;
}
```
## Conclution
The time complexity of this algorithm is O(n), where n is the number of nodes in the list, as it involves traversing to the specified position.
These insertion algorithms provide flexibility for adding nodes at different points in a doubly linked list based on specific requirements.