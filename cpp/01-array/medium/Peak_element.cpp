/*
Program to find Peak element of the given array
An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).
*/

#include<bits/stdc++.h>
using namespace std;

int peakElement(int a[], int n)
{
   // Your code here
   for(int i=0;i<n;i++){
       if(i==0 && a[i]>=a[i+1]){
           return i;
       }
       else if(i==n-1 && a[i]>=a[i-1]){
           return i;
       }
       else if(a[i]>=a[i-1] && a[i]>=a[i+1])return i;
   }
   return -1;
}

int main(){
    int a[]={1, 1, 1, 2, 1, 1, 1};
    cout<<peakElement(a , 7)<<endl;
}

/*
output:
1
*/