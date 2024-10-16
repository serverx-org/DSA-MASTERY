// Binary search is an efficient algorithm for finding an element in a sorted array. The algorithm works by repeatedly dividing the search interval in half. If the target value is less than the middle element, the search continues on the left half. If the target value is greater, it continues on the right half. This process continues until the element is found or the interval becomes empty.


#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;

    while(low<=high){
        int mid = low+(high-low)/2;
        // Check if the target is at the middle
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid]>target){
            high = mid - 1;
        } 
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int size = 9;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 50; 

    int idx = binarySearch(arr, size, target);

    if(idx != -1){
        cout << "Element found at index "<<idx<<endl;
    }
    else{
        cout<<"Element not found in the array"<<endl;
    }

    return 0;
}
