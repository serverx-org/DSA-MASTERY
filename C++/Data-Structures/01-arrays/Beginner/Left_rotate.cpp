/*
A program to Left-rotate the array by 'd' places
*/

#include<bits/stdc++.h>
using namespace std;

void rotateArr(int a[], int d, int n){
        
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    int k=0;
    for(int i=n-d;i<n;i++){
        a[i]=temp[k++];
    }
}

int main(){
    int n,d;
    cout<<"\nEnter the number of Elements\n";
    cin>>n;
    cout<<"\nEnter d"<<endl;
    cin>>d;
    int arr[n];
    cout<<"\nEnter array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateArr(arr,d,n);
    cout<<"Modified Array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/*
output :
Enter the number of Elements
10
Enter d
3
Enter array elements
2 4 6 8 10 12 14 16 18 20
Modified Array is 
8 10 12 14 16 18 20 2 4 6 

*/

