/*
Write a program to print the row number having the maximum sum in a given matrix.
Input 1:
1 3 5 7
3 4 7 8
1 4 12 3
Output 1: 2
Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20
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
    vector<int>b;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        b.push_back(sum);
    }
    int max=INT_MIN;
    int idx=-1;
    for(int i=0;i<b.size();i++){
        if(b[i]>max){
            max=b[i];
            idx=i;
        }
    }
    cout<<idx+1;
return 0;
}