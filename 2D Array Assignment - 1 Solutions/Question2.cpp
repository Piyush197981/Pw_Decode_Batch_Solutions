/*
Write a program to add two matrices and save the result in one of the given matrices.
Input 1:
1 2 3
4 5 6
7 8 9

4 5 8
0 0 8
1 2 0
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n,m;
    cout<<"Kindly Enter The Number Of Rows :- ";
    cin>>n;

    cout<<"Kindly Enter The Number Of Cols :- ";
    cin>>m;

    int a[n][m];
    int b[n][m];
    cout<<"Kindly Enter The Elements Of 1st Matrix :- ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Kindly Enter The Elements Of 2nd Matrix :- ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}