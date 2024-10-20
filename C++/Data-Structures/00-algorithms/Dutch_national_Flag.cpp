// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

//The solution of the above problem is 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to sort an array containing 0s, 1s, and 2s
    void sortColors(vector<int>& nums) {
        int mid = 0;         // Pointer for current element being evaluated
        int low = 0;         // Pointer for the next position of 0
        int high = nums.size() - 1; // Pointer for the next position of 2
        int temp;            // Temporary variable for swapping

        // Loop until mid pointer surpasses high pointer
        while (high >= mid) {
            // If the current element is 0
            if (nums[mid] == 0) {
                // Swap it with the element at low pointer
                temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;
                low++;    // Move the low pointer forward
                mid++;    // Move the mid pointer forward
            }
            // If the current element is 1
            else if (nums[mid] == 1) {
                mid++;    // Just move the mid pointer forward
            }
            // If the current element is 2
            else if (nums[mid] == 2) {
                // Swap it with the element at high pointer
                temp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp;
                high--;   // Move the high pointer backward
            }
        }
    }
};
//This algorithm is known as the DNF or the DUtch National Flag algorithm

 