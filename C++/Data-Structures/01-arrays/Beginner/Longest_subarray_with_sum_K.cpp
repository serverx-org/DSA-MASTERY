/*
A program to find the length of the longest subarray with sum equals to k
Time Complexity : O(n^2)
*/

#include<bits/stdc++.h>
using namespace std;

int subArrayWithSumK(int arr[],int n,int k){
    int maxLength=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                maxLength=max(maxLength,j-i+1);
            }
        }
    }
    return maxLength;
}

int main(){
    int n,k;
    cout<<"\nEnter the number of Elements\n";
    cin>>n;
    cout<<"\nEnter k"<<endl;
    cin>>k;
    int arr[n];
    cout<<"\nEnter array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"length of the longest subarray with sum k is :"<<subArrayWithSumK(arr,n,k);
    cout<<endl;
}

/*
output:
Enter the number of Elements
10
Enter k
3
Enter array elements
1 2 3 1 1 1 2 1 2 3
length of the longest subarray with sum k is :3
*/