/*
Program to find Majority Element of the given Array
Note : The majority element is the element that appears more than n/2 times. You may assume that the majority element always exists in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int majorityElementMethod1(vector<int>& arr){
//Moore's count Algorithm
    int count=0,curr;
    for(int i:arr){
        if(count==0){
            curr=i;
        }
        if(curr==i)count++;
        else if(curr!=i)count--;
    }
    return curr;
}

int majorityElementMethod2(vector<int>& arr){
    unordered_map<int,int>m;
    for(int i:arr){
        m[i]++;
    }
    int times=arr.size()/2;
    for(auto i:m){
        if(i.second>times)return i.first;
    }
    return -1;
}

int main(){
    vector<int>a={2,2,1,1,1,2,2};
    cout<<"Method-1 result : "<<majorityElementMethod1(a)<<endl;
    cout<<"Method-2 result : "<<majorityElementMethod2(a)<<endl;
}

/*
output:
Method-1 result : 2
Method-2 result : 2
*/