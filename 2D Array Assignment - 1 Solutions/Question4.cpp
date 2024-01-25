/*
Write a C++ program to find the largest element of a given 2D array of integers.
Input 1:
1 3 4 6
2 4 5 7
3 5 6 8
4 6 7 9
Output 1: 9
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
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    cout<<max;

return 0;
}