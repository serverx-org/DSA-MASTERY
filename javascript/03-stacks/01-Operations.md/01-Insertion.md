# Stack Insertion Operations (Push) in JavaScript


## Definition
The Push operation adds an element to the top of the stack. The new element becomes the top of the stack, and the size of the stack increases by one.

## Implementation
In JavaScript, you can use an array to simulate a stack. The `push` method is used to add an element to the top of the stack.

```javascript
// Initialize an empty stack
let stack = [];

// Push an element onto the stack
function pushElement(element) {
    stack.push(element);
}
// Example Usage
pushElement(10);
pushElement(20);
pushElement(30);
console.log("Stack after push operations:", stack);
```
## Explanation
Create an empty array (stack) to represent the stack.
The pushElement function takes an element as an argument and uses the push method to add it to the end of the array, simulating the top of the stack.
The example usage demonstrates pushing elements onto the stack.
Time Complexity
The time complexity of the Push operation using an array is typically O(1), as adding an element to the end of an array is a constant-time operation.

## Considerations
Ensure that the array doesn't exceed its capacity or encounter overflow issues.
In a more advanced scenario, consider implementing a custom stack class for better encapsulation and control.
## Conclution
This Push operation is fundamental for building and manipulating a stack in JavaScript.