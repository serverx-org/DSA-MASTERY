// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

//https://leetcode.com/problems/3sum/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find all unique triplets in the array that sum to zero
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v; // Vector to store the resulting triplets
        // vector<int> temp; // Temporary vector, not used in this implementation
        sort(nums.begin(), nums.end()); // Sort the array for easier processing

        // Iterate through the sorted array
        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue; 

            int j = i + 1; // Pointer for the second element
            int k = nums.size() - 1; // Pointer for the third element
            
            // Check for triplets while j is less than k
            while (k > j) {
                // If the sum of the triplet is zero
                if (nums[i] + nums[j] + nums[k] == 0) {
                    v.push_back({nums[i], nums[j], nums[k]}); // Add the triplet to results
                    
                    int t1 = nums[j]; // Store the current second element
                    int t2 = nums[k]; // Store the current third element
                    
                    // Move j forward to skip duplicates
                    while (nums[j] == t1 && j < k) {
                        j++;
                    }
                    // Move k backward to skip duplicates
                    while (nums[k] == t2 && k > j) {
                        k--;
                    }
                }
                // If the sum is less than zero, increase the second element
                else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                }
                // If the sum is greater than zero, decrease the third element
                else {
                    k--;
                }
            }
        }
        return v; // Return the list of unique triplets
    }
};
