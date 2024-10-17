# Creating a Singly Linked List in JavaScript

## Node Structure
In a singly linked list, each node contains two components:
- **Data:** The actual value or information stored in the node.
- **Next:** A reference to the next node in the sequence.

```javascript
class Node {
    constructor(data, next = null) {
        this.data = data;
        this.next = next;
    }
}
```
The Node class is used to create individual nodes of the linked list. The data property holds the value of the node, and the next property points to the next node in the list.

## Linked List Class
The linked list class is responsible for managing the nodes and providing operations for creating, modifying, and traversing the list.

```javascript
class LinkedList {
    constructor() {
        this.head = null; // Initially, the list is empty
    }
}
```
The LinkedList class has a head property, which points to the first node in the list. When the list is initially created, the head is set to null indicating an empty list.