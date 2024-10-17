/*
A program to find the second largest element in the given array
Time Complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[],int n){
    int second_max=-1;
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
        else if(arr[i]>second_max && arr[i]!=max)second_max=arr[i];
    }
    return second_max;
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
    cout<<"Second largest Number in the given Array is "<<secondLargestElement(arr,n);
    cout<<endl;
}

/*
output:
Enter the number of Elements
8
Enter array elements
12 32 54 45 7 67 89 89
Second largest Number in the given Array is 67
*/