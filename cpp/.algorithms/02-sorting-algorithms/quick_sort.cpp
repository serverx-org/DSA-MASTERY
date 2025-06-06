// QuickSort is a sorting algorithm based on the Divide and Conquer that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

// QuickSort Algorithm work
    // 1.Choose a Pivot
    // 2.Partition the Array
    // 3.Recursively Call
    // 4.Base Case

#include <bits/stdc++.h>
using namespace std;


void Swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


// Function to partition the array using the last element as the pivot
int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j]<pivot){
            i++;
            Swap(arr,i,j);
        }
    }
    Swap(arr,i+1,end);
    return i+1 ;
}

// Function to perform QuickSort recursively
void quickSort(int arr[],int start,int end){
    if(start<end){ // Base case
        int pivot = partition(arr,start,end); // Partition the array
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}

int main(){

    int arr[7] = {6,2,3,1,10,23,4};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}