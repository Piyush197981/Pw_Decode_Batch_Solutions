/*
Sort the array in descending order using Bubble Sort.
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

    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=n-1;j>=1+i;j--){
            if(a[j]>a[j-1]){
                swap(a[j],a[j-1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}