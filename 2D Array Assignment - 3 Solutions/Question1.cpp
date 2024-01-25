/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Input :
1 1 1
1 0 1
1 1 1
Output :
1 0 1
0 0 0
1 0 1
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

    cout<<"Kindly Enter The Elements :- ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<int>b;
    vector<int>c;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                b.push_back(i);
                c.push_back(j);
            }
        }
    }
    for(int o=0;o<b.size();o++){
        int i=b[o];
        int j=c[o];
        for(int k=0;k<n;k++){
            a[k][j]=0;
        }
        for(int k=0;k<m;k++){
            a[i][k]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}