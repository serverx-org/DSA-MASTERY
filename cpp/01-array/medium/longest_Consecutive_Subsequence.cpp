/*
Program to find the subsequence of the given array which contains the consecutive elements
*/

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& arr) {
    if(arr.size()==0)return 0;
    sort(arr.begin(),arr.end());
    int lastElement=INT_MIN;
    int count=1,mx=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(lastElement==arr[i]-1){
            count++;
            lastElement=arr[i];
        }
        else if(lastElement==arr[i])continue;
        else {
            count=1;
            lastElement=arr[i];
        }
        mx=max(mx,count);
    }
    return mx;
}

int main(){
    vector<int>arr={0,3,7,2,5,8,4,6,0,1};
    int result=longestConsecutive(arr);
    cout<<result<<endl;
}

/*
output:
9
*/