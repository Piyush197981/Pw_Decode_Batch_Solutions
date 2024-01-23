/*
Check if an array is a subset of another .
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Kindly Enter The Number Of Elements In First Array :- ";
    cin >> n;

    int arr[n];
    cout<<"Kindly Enter The Elements Of First Array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cout<<"Kindly Enter The Number Of Elements In Subset Array :- ";
    cin >> m;

    int arr1[m];
    cout<<"Kindly Enter The Elements Of Subset Array :- ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    bool flag=true;
    for(int i=0;i<m;i++){
        flag=true;
        for(int j=0;j<n;j++){
            if(arr1[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            break;
        }
    }
    if(flag==true){
        cout<<"Second Array Is Not The Subset Of First Array";
    }
    else{
        cout<<"Second Array Is The Subset Of First Array";
    }

    return 0;
}
