/*
Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
Input 1: n = 3
Output 1: [[1,2,3],[8,9,4],[7,6,5]]
Input 2: n = 1
Output 2: [[1]]
*/
#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Kindly Enter The Number Of Rows And Cols :- ";
    cin>>n;

    int a[n][n];
    
    int minr,maxr,minc,maxc;
    minr=minc=0;
    maxc=maxr=n-1;
    int m=1;

    while(minc<=maxc && minr<=maxr){
        //for right
        for(int i=minc;i<=maxc;i++){
            a[minr][i]=m;
            m++;
        }
        minr++;

        //for down
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            a[i][maxc]=m;
            m++;
        }
        maxc--;

        //for left
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            a[maxr][i]=m;
            m++;
        }
        maxr--;

        //for up
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            a[i][minc]=m;
            m++;
        }
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}