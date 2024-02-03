/*
Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
and display the sorted array
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
    cin>>n;
    cin.ignore();
    vector<string>s;
    for(int i=0;i<n;i++){
        string a;
        getline(cin,a);
        s.push_back(a);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }

return 0;
}