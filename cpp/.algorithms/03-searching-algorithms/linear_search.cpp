// Linear search is a simple algorithm that checks each element in a list one by one until it finds the target element. If the target is found, the index of the element is returned. Otherwise, the search continues until the end of the list. If the target is not found after searching through all elements, it returns a value -1 that indicate target not found.

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    int target = 30;

    int result = linearSearch(arr, size, target);

    if(result != -1){
        cout << "Target found at index " << result << endl;
    } 
    else{
        cout << "Target not found in the array" << endl;
    }
    
   return 0;
}