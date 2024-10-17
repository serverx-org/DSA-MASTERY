/*
Sorting the given array consisting only 0 s, 1 s and 2 s
*/

#include<bits/stdc++.h>
using namespace std;

void sort_012(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0;
    //iterate till all the elements are sorted
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high--]);
        }
    }
}

int main(){
    int arr[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given Array : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    sort_012(arr,n);
    cout<<"Sorted Array :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

/*
output:
Given Array : 
0 1 1 0 1 2 1 2 0 0 0 1 
Sorted Array :
0 0 0 0 0 1 1 1 1 1 2 2 
*/