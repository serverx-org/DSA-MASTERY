/*Program to find the next permutation sequence of the given array*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(int n, vector<int> &a){
        // id is index
        int id=-1;
        //find the pivot element which breaks the non-increasing sequence
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                id=i;break;
            }
        }
        if(id!=-1){
            for(int i=n-1;i>=id;i--){
                if(a[i]>a[id]){
                    swap(a[i],a[id]);break;
                }
            }
        }
        //minimize the suffix part
        reverse(a.begin()+id+1,a.end());
        return a;
}

int main(){
    //Given array
    vector<int>arr={1,2,3,6,5,4};
    //nextPermutation function returns the modified array
    arr=nextPermutation(6,arr);
    //display the array
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;
}

/*
output:
1 2 4 3 5 6 
*/