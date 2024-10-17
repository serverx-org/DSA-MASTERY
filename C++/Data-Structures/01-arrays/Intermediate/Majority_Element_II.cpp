/*
Program to find all the elements in the given array which occur more than n/3 times
(n is the size of the given array)
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int>& arr) {
    int k=arr.size()/3;
    unordered_map<int,int>v;
    for(int i:arr){
        v[i]++;
    }
    vector<int>result;
    for(auto i:v){
        if(i.second>k)result.push_back(i.first);
    }
    return result;
}

int main(){
    vector<int>arr={1,2,3,2,3,1,3,2,1,1,2};
    vector<int>result=majorityElementII(arr);
    for(int i:result){
        cout<<i<<" ";
    }cout<<endl;
}

/*
output:
2 1
*/