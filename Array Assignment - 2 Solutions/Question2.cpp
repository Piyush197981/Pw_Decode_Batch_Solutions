/*
WAP to find the largest three elements in the array.
*/
#include <iostream>
#include <algorithm> 
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

    sort(arr, arr + n);

    cout<<"The Largest Three Elements Of The Array Are :- ";

    for(int i=n-3;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}