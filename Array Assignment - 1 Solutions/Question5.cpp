/*
WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.
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
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<"The Missing Element Is :- "<<i+1;
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"No Missing Element";
    }

return 0;
}