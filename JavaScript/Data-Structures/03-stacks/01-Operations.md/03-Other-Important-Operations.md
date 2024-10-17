# Stack Operations Implementation in JavaScript

## 1. Peek (Top) Operation

```javascript
// Peek (Top) operation to retrieve the top element without removing it
function peek() {
    if (stack.length === 0) {
        console.log("Stack is empty. Cannot peek.");
        return;
    }
    return stack[stack.length - 1];
}
```
### Explanation:
The peek function checks if the stack is empty. If not, it returns the last element in the stack using array indexing, simulating the top of the stack without removing the element.
## 2. isEmpty Operation
```javascript
// isEmpty operation to check if the stack is empty
function isEmpty() {
    return stack.length === 0;
}
```
### Explanation:
The isEmpty function simply checks if the length of the stack is 0, returning true if the stack is empty and false otherwise.
## 3. Size Operation
```javascript
// Size operation to return the number of elements in the stack
function size() {
    return stack.length;
}
```
### Explanation:
The size function returns the length of the stack, indicating the number of elements in the stack.
These operations are essential for inspecting and managing the state of a stack in JavaScript.
## Example 
```javascript
// Example Usage
console.log("Original Stack:", stack);

pushElement(10);
console.log("Stack after pushing 10:", stack);

pushElement(20);
console.log("Stack after pushing 20:", stack);

// Peek (Top) operation
console.log("Top element (Peek):", peek());

// Check if the stack is empty
console.log("Is stack empty?", isEmpty());

// Get the size of the stack
console.log("Size of the stack:", size());
```
# Conclusion
In this implementation, we have demonstrated key operations for managing a stack in JavaScript, including Peek (Top), isEmpty, and Size. These operations provide essential functionality for inspecting and manipulating the state of a stack. Understanding and implementing these operations are fundamental for effective stack usage in various programming scenarios. Whether you're building algorithms, managing function calls, or implementing undo mechanisms, a well-implemented stack can greatly enhance your program's efficiency and functionality. Happy coding!