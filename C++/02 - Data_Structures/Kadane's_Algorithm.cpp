//Kadane's Algorithm
// This C++ code uses Kadane's Algorithm, which efficiently finds the maximum sum of a contiguous subarray in linear time. 
// It initializes two variables to track the current maximum sum and the global maximum sum as it iterates through the array. 
// The algorithm updates these values based on the current element and returns the maximum found.

#include <iostream>
#include <vector>
#include <algorithm>

int kadane(const std::vector<int>& nums) {
    int max_current = nums[0]; 
    int max_global = nums[0]; 
    for (size_t i = 1; i < nums.size(); i++) {
        max_current = std::max(nums[i], max_current + nums[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }
    return max_global;
}
int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_sum = kadane(nums);
    std::cout << "Maximum contiguous subarray sum is: " << max_sum << std::endl;
    return 0;
}
