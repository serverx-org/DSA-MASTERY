# Quick Sort Algorithm

## Overview
Quick Sort is a divide-and-conquer sorting algorithm. It works by selecting a pivot element and partitioning the array around the pivot such that elements less than the pivot are on the left, and elements greater are on the right. The algorithm then recursively applies the same process to the subarrays.

## Time Complexity
- Best Case: **O(n log n)** - Occurs when the pivot divides the array into two nearly equal halves.
- Average Case: **O(n log n)** - Expected on average for a randomly ordered array.
- Worst Case: **O(n^2)** - Occurs when the pivot selection consistently produces one-sided splits, such as with a sorted array.

## Space Complexity
- Space Complexity: **O(log n)** - For the recursive call stack in the best and average cases. However, it can go up to **O(n)** in the worst case due to unbalanced partitions.

## How to Run
Compile and run `quick_sort.cpp` using a C++ compiler:
```bash
g++ quick_sort.cpp -o quick_sort
./quick_sort
