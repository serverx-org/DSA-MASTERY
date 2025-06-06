#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void merge(int arr[],int start,int mid,int end){
    int len1 = mid-start+1;
    int len2 = end-mid;

    int a[len1];
    int b[len2];

    for(int i=0;i<len1;i++){
        a[i]=arr[start+i];
    }
    for(int i=0;i<len2;i++){
        b[i]=arr[mid+i+1];
    }

    int i=0;
    int j=0;
    int k=start;

    while(i<len1 && j<len2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++,k++;
        }
        else{
            arr[k]=b[j];
            j++,k++;
        }
    }

    while(i<len1){
        arr[k]=a[i];
            i++,k++;
    }
    while(j<len2){
        arr[k]=b[j];
            j++,k++;
    }
}

void mergeSort(int arr[],int start,int end){
    if(start<end){
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
    return;
}

int main(){

    int arr[7] = {6,2,3,1,10,23,4};
    int start = 0;
    int end = 6;
    mergeSort(arr,start,end);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}