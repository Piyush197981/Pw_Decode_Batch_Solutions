/*
Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
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

    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
    }
    cout<<"The Required Array Is :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}