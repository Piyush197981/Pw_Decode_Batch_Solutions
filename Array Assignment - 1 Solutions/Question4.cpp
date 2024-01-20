/*
Given an array, predict if the array contains duplicates or not.
*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Kindly Enter The Number Of Elements :- ";
    cin>>n;

    int arr[n];
    
    cout<<"Kindly Enter The Elements :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag=false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                cout<<"Duplicates Present";
                break;
            }
        }
    }
    if(flag==false){
        cout<<"No Duplicates Found";
    }

return 0;
}