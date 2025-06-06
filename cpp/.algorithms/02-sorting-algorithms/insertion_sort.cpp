#include<iostream>
#include<vector>
using namespace std;
//insertion sort
void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(vector<int> &v) {
    int n = v.size();
    // skip i = 0
    for (int i = 1; i < n; ++i) {
    int key = v[i];
    int j = i - 1;
    // Move elements of arr[0,i-1] that are greater than key to one position ahead of their current position
    while (j >= 0 && v[j] > key) {
        v[j + 1] = v[j];
        j--;
    }
    v[j + 1] = key; // insertion
    }
}
int main(){
    vector<int> v={44, 33, 55, 22, 11};
    insertionSort(v);
    print(v);
    return 0;
}