/*
Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a[5][5];
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j]=10;;
        }
    }

return 0;
}

/*
for vector we can simply use 
vector<vector<int>>v(5,vector<int>(5,10));
*/