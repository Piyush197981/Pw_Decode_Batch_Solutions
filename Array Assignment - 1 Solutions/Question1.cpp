/*
Calculate the product of all the elements in the given array.
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

    int p=1;

    for(int i=0;i<n;i++){
        p*=arr[i];
    }

    cout<<"The Product Of All Elements Is :- "<<p;

return 0;
}