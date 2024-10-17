# Singly Linked List Deletion Algorithms in JavaScript

In a singly linked list, nodes can be deleted from different positions in the list. Let's explore three common deletion algorithms:

## 1. Delete from the Beginning

To delete a node from the beginning of the linked list, update the `head` pointer to point to the next node.

```javascript
deleteFirst() {
    if (this.head) {
        this.head = this.head.next;
    }
}
```
This algorithm has a constant time complexity (O(1)), as it involves updating the head pointer only.

## 2. Delete from the End
To delete a node from the end of the linked list, traverse the list to find the last node and update the next pointer of the second-to-last node to null.

```javascript
deleteLast() {
    if (!this.head) {
        return;
    }

    if (!this.head.next) {
        this.head = null;
        return;
    }

    let current = this.head;
    let previous = null;

    while (current.next) {
        previous = current;
        current = current.next;
    }

    previous.next = null;
}
```
The time complexity of this algorithm is O(n), where n is the number of nodes in the list, as it involves traversing the entire list.

## 3. Delete a Specific Node
To delete a node from a specific position in the linked list, traverse the list to find the node at the specified position. Update the next pointer of the previous node to skip the current node.

```javascript
deleteAt(position) {
    if (position === 0) {
        this.deleteFirst();
        return;
    }

    let current = this.head;
    let count = 0;
    let previous = null;

    while (count < position && current) {
        previous = current;
        current = current.next;
        count++;
    }

    if (count < position || !current) {
        // Handle invalid position
        return;
    }

    previous.next = current.next;
}
```

## Conclution
The time complexity of this algorithm is O(n), where n is the number of nodes in the list, as it involves traversing to the specified position.
These deletion algorithms provide flexibility for removing nodes from different positions in a singly linked list based on specific requirements.





