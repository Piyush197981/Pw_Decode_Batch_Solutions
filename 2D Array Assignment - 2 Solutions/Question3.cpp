/*
Write a program to print the matrix in wave form.
Input :
1 2 3
4 5 6
7 8 9
Output : 7 4 1 2 5 8 9 6 3
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    int n,m;
    cout<<"Kindly Enter The Number Of Rows :- ";
    cin>>n;

    cout<<"Kindly Enter The Number Of Cols :- ";
    cin>>m;

    int a[n][m];
    cout<<"Kindly Enter The Elements :- ";
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }else{
            for(int j=0;j<n;j++){
                cout<<a[j][i]<<" ";
            }
        }
    }

return 0;
}