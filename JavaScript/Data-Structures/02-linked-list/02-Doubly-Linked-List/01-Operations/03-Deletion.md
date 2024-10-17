# Doubly Linked List Deletion Algorithms in JavaScript

In a doubly linked list, nodes can be deleted from different positions in the list. Here, we'll explore three common deletion algorithms:

## 1. Delete from the Beginning

To delete a node from the beginning of the doubly linked list, update the `next` pointer of the second node to `null`. Update the `prev` pointer of the second node to `null` if the list has only two nodes.

```javascript
deleteFirst() {
    if (this.head) {
        this.head = this.head.next;
        if (this.head) {
            this.head.prev = null;
        } else {
            this.tail = null;
        }
    }
}
```
This algorithm has a constant time complexity (O(1)), as it involves updating the head pointer only.

## 2. Delete from the End
To delete a node from the end of the doubly linked list, update the prev pointer of the last node to null. Update the next pointer of the second-to-last node to null.

```javascript
deleteLast() {
    if (this.tail) {
        this.tail = this.tail.prev;
        if (this.tail) {
            this.tail.next = null;
        } else {
            this.head = null;
        }
    }
}
```
The time complexity of this algorithm is O(1), as it involves updating the tail pointer only.

## 3. Delete a Specific Node
To delete a node from a specific position in the doubly linked list, traverse the list to find the node at the specified position. Update the next pointer of the previous node to skip the current node. Update the prev pointer of the next node to skip the current node.

``` javascript
deleteAt(position) {
    if (position === 0) {
        this.deleteFirst();
        return;
    }

    let current = this.head;
    let count = 0;

    while (count < position && current) {
        current = current.next;
        count++;
    }

    if (count < position || !current) {
        // Handle invalid position
        return;
    }

    current.prev.next = current.next;
    if (current.next) {
        current.next.prev = current.prev;
    }
}
```
## Conclution
The time complexity of this algorithm is O(n), where n is the number of nodes in the list, as it involves traversing to the specified position.
These deletion algorithms provide flexibility for removing nodes from different positions in a doubly linked list based on specific requirements.