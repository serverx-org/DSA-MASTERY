/*
A Program to find the largest element of a given array
Time Complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"\nEnter the number of Elements\n";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"largest Number in the given Array is "<<largestElement(arr,n);
    cout<<endl;
}

/*
output:
Enter the number of Elements
8
Enter array elements
23 65 43 78 12 23 90 78
largest Number in the given Array is 90
*/