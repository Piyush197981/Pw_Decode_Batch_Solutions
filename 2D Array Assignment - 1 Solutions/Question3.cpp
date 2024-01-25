/*
Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).
Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
Output 1: -4
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
    int l1,r1,l2,r2;
    cout<<"Kindly Enter The Value Of L1 And R1 :- ";
    cin>>l1>>r1;
    cout<<"Kindly Enter The Value Of L2 And R2 :- ";
    cin>>l2>>r2;
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=a[i][j];
        }
    }
    cout<<sum;

return 0;
}