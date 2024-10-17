# Queue Insertion Operation (Enqueue) in JavaScript

## Definition
The Enqueue operation adds an element to the rear of the queue. This means the new element becomes the last in the queue, and the size of the queue increases by one.

## Implementation
In JavaScript, you can use an array to simulate a queue. The `push` method is used to add an element to the end of the array, representing the rear of the queue.

```javascript
// Initialize an empty queue
let queue = [];

// Enqueue operation to add an element to the rear of the queue
function enqueueElement(element) {
    queue.push(element);
}

// Example Usage
console.log("Original Queue:", queue);

enqueueElement(10);
console.log("Queue after enqueuing 10:", queue);

enqueueElement(20);
console.log("Queue after enqueuing 20:", queue);

enqueueElement(30);
console.log("Queue after enqueuing 30:", queue);
```
## Explanation:
Initialize an empty array (queue): Start by creating an empty array to represent the queue.

Enqueue Operation (enqueueElement function): The enqueueElement function takes an element as an argument and uses the push method to add it to the end of the array, simulating the rear of the queue.

Example Usage: Demonstrates the enqueue operation with different elements (10, 20, and 30). Each time an element is enqueued, it becomes the last in the queue.

## Time Complexity
The time complexity of the Enqueue operation using an array is typically O(1), as adding an element to the end of an array is a constant-time operation.

## Considerations
Ensure that the array doesn't exceed its capacity or encounter overflow issues.
In a more advanced scenario, consider implementing a custom queue class for better encapsulation and control.
# Conclution
This Enqueue operation is fundamental for building and managing a queue in JavaScript.