# Basic Operations of Arrays in JavaScript

## 1. **Declaration and Initialization:**

- Create an array and initialize it with elements.

```javascript
   let fruits = ['apple', 'orange', 'banana'];
```

## 2. Accessing Elements

- Access elements by their index.
- Negative indexing to access elements from the end.

```javascript
let firstFruit = fruits[0];       // Access the first element
let lastFruit = fruits[fruits.length - 1];  // Access the last element using negative indexing
```

## 3. Updating Elements

- Modify the value of an element at a specific index.

```javascript
fruits[1] = 'grape';  // Update the second element
```

# 4. Adding Elements

- Push: Add an element to the end of the array.
- Unshift: Add an element to the beginning of the array.
- Splice: Add elements at a specific index.

``` javascript
fruits.push('kiwi');            // Add 'kiwi' to the end
fruits.unshift('pineapple');     // Add 'pineapple' to the beginning
fruits.splice(2, 0, 'lemon');    // Add 'lemon' at index 2
```

## 5. Removing Elements

- Pop: Remove the last element of the array.
- Shift: Remove the first element of the array.
- Splice: Remove elements from a specific index.

```javascript
let removedLast = fruits.pop();         // Remove and return the last element
let removedFirst = fruits.shift();      // Remove and return the first element
let removedAtIndex = fruits.splice(1, 2); // Remove 2 elements starting from index 1
```

## 6. Concatenation

- Combine two or more arrays to create a new array.

```javascript
let moreFruits = ['mango', 'pear'];
let combinedArray = fruits.concat(moreFruits);
```

## 7. Slicing

- Extract a portion of the array to create a new array.

```javascript
let slicedArray = fruits.slice(1, 3);  // Extract elements from index 1 to 2
```

## 8. Searching

- IndexOf: Find the index of a specific element.
- Includes: Check if an array contains a specific element.

```javascript
let indexOfBanana = fruits.indexOf('banana');  // Returns the index of 'banana'
let includesMango = fruits.includes('mango');  // Returns true if 'mango' is present
```

## 9. Sorting

- Sort: Arrange the elements in ascending or descending order.

```javascript
fruits.sort();      // Sort elements in ascending order
fruits.reverse();   // Reverse the order of elements
```

## 10. Iterating

- Use loops or higher-order functions like `forEach`, `map`, `filter`, and `reduce` to iterate through elements.

```javascript
// Using forEach
fruits.forEach(fruit => {
    console.log(fruit);
});

// Using map
let upperCaseFruits = fruits.map(fruit => fruit.toUpperCase());
```

## 11. Length

- Access the `length` property to determine the number of elements in the array.

```javascript
let arrayLength = fruits.length;  // Returns the number of elements in the array
```

# Conclution

These concepts provide a foundational understanding of array operations in JavaScript. Feel free to use and modify these examples for your projects.
