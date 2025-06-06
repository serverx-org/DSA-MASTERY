#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to sort an array containing 0s, 1s, and 2s
    void sortColors(vector<int>& nums) {
        int mid = 0;         // Pointer for current element being evaluated
        int low = 0;         // Pointer for the next position of 0
        int high = nums.size() - 1; // Pointer for the next position of 2

        // Loop until mid pointer surpasses high pointer
        while (high >= mid) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]); // Swap with low pointer
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++; // Just move mid pointer forward
            }
            else {
                swap(nums[mid], nums[high]); // Swap with high pointer
                high--;
            }
        }
    }
};

int main() {
    Solution solution;

    // Example array of 0s, 1s, and 2s (red, white, and blue)
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    // Call the sortColors function to sort the array
    solution.sortColors(nums);

    // Output the sorted array
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
