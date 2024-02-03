/*
Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.
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

    int k;
    cout<<"Kindly Enter The Value Of k :- ";
    cin>>k;

    sort(a,a+n);
    cout<<a[k-1];

return 0;
}