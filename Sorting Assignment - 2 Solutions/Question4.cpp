/*
Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.
*/
#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <climits>
#include <string>
#include <string.h>
#include <sstream>
using namespace std;

int main(){

    int n;
    cout<<"Kindly Enter The Number Of Elements :- ";
    cin>>n;

    int a[n];

    cout<<"Kindly Enter The Elements :- ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int b[n];

    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(b[i]!=b[i-1]){
            swap(b[i],b[i-1]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        a[i]+=b[i];
    }
    cout<<"Minimum Sum Is :- ";
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
return 0;
}