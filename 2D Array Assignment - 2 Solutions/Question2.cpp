/*
Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
3 6 9
2 5 8
1 4 7
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    int n;
    cout<<"Kindly Enter The Number Of Rows And Cols :- ";
    cin>>n;

    int a[n][n];
    cout<<"Kindly Enter The Elements :- ";
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(i<k){
            swap(a[j][i],a[k][i]);
            j++;
            k--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}