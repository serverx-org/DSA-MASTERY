/*
Program to find the subarray of the given array with maximum sum of it's elements
*/

#include<bits/stdc++.h>
using namespace std;

int maximumSubArray(vector<int>arr,int n) {
    //kadane's Algorithm to find maximum subarray sum
    int sum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx=max(mx,sum);
        //assign 0 to sum if sum becomes negative
        if(sum<0)sum=0;
    }
    return mx;
}

int main(){
    //given array
    vector<int>a={-2,1,-3,4,-1,2,1,-5,4};
    int mxsubArraySum=maximumSubArray(a,9);
    cout<<mxsubArraySum<<endl;
}

/*
output:
6
*/