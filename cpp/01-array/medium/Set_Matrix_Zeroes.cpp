#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    vector<int>row(matrix.size(),0),col(matrix[0].size(),0);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(row[i]||col[j])matrix[i][j]=0;
        }
    }
}

void display_Matrix(vector<vector<int>>matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    vector<vector<int>>matrix={{1, 2, 3, 4},
                               {5, 6, 0, 7}, 
                               {8, 9, 4, 6},
                               {8, 4, 5, 2}};
    setZeroes(matrix);
    //Displaying the modified matrix
    display_Matrix(matrix);

                        
}

/*
output:
1 2 0 4 
0 0 0 0 
8 9 0 6 
8 4 0 2 
*/