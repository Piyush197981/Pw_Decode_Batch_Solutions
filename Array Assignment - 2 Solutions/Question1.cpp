/*
Count the number of elements strictly greater than x.
*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Kindly Enter The Number Of Elements :- ";
    cin>>n;

    int arr[n];
    int count=0;

    cout<<"Kindly Enter The Elements :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Kindly Enter The Number :- ";
    cin>>x;

    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"The Number Of Elements Greater Than "<<x<<" Are :- "<<count;

return 0;
}