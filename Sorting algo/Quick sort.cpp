#include <iostream>
#include <vector>

// Partition function for Quick Sort
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Select the pivot element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort recursive function
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1); // Recursively sort left half
        quickSort(arr, pi + 1, high); // Recursively sort right half
    }
}

// Main function to test the Quick Sort algorithm
int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}

