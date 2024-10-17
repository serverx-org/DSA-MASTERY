# Queue Operations in JavaScript

## 1. Peek (Front) Operation

### Definition
The Peek (Front) operation retrieves the front element of the queue without removing it. It allows you to inspect the element at the front of the queue without modifying the queue itself.

### Implementation
In JavaScript, you can use array indexing to access the first element of the array, representing the front of the queue.

```javascript
// Peek (Front) operation to retrieve the front element without removing it
function peek() {
    if (queue.length === 0) {
        console.log("Queue is empty. Cannot peek.");
        return;
    }
    return queue[0];
}
//Example Usage
console.log("Original Queue:", queue);

enqueueElement(10);
console.log("Queue after enqueuing 10:", queue);

enqueueElement(20);
console.log("Queue after enqueuing 20:", queue);

// Peek (Front) operation
console.log("Front element (Peek):", peek());
```
### Explanation
Peek Operation (peek function): The peek function checks if the queue is empty. If not, it returns the first element in the array (index 0), simulating the front of the queue without removing the element.
## 2. isEmpty Operation
### Definition
The isEmpty operation checks if the queue is empty by verifying the length of the array.

```javascript
// isEmpty operation to check if the queue is empty
function isEmpty() {
    return queue.length === 0;
}
// Example Usage
console.log("Is queue empty?", isEmpty());
```
### Explanation
isEmpty Operation (isEmpty function): The isEmpty function returns true if the length of the queue is 0, indicating that the queue is empty. Otherwise, it returns false.
## 3. Size Operation
### Definition
The Size operation returns the number of elements in the queue by retrieving the length of the array.

```javascript
// Size operation to return the number of elements in the queue
function size() {
    return queue.length;
}
// Example Usage
console.log("Size of the queue:", size());
```
## Explanation
Size Operation (size function): The size function returns the length of the queue, indicating the number of elements in the queue.
# Conclution
Feel free to use this template as a foundation and add detailed information under each section based on your specific needs.