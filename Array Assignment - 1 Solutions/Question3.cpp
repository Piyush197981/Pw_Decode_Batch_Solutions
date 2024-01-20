/*
Find the minimum value out of all elements in the array.
*/
#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cout<<"Kindly Enter The Number Of Elements :- ";
    cin>>n;

    int m=INT_MAX;

    int arr[n];
    
    cout<<"Kindly Enter The Elements :- ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(m>arr[i]){
            m=arr[i];
        }
    }
    cout<<"The Smallest Element Is :- "<<m;

return 0;
}