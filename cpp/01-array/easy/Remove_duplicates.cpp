/*
A program to remove duplicates in-place from a sorted array
*/
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
    int new_n=removeDuplicates(arr,n);
    cout<<"Modified Array is "<<endl;
    for(int i=0;i<new_n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/*
output:
Enter the number of Elements
4
Enter array elements
1 2 2 4
Modified Array is 
1 2 4 
*/