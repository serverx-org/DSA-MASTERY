/*
*/

#include<bits/stdc++.h>
using namespace std;

void printLeaders_method1(int arr[],int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[i]<=arr[j])break;
        }
        if(j==n)cout<<arr[i]<<" ";
    }
}

void printLeaders_method2(int arr[],int n){
    int right_max=arr[n-1];
    cout<<right_max<<" ";
    for(int i=n-2;i>=0;i--){
        if(right_max<arr[i]){
            right_max=arr[i];
            cout<<right_max<<" ";
        }
    }
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
    cout<<"Leaders of Array using method 1 :";
    printLeaders_method1(arr,n);
    cout<<endl;
    cout<<"Leaders of Array using method 2 :";
    printLeaders_method2(arr,n);
    cout<<endl;
}