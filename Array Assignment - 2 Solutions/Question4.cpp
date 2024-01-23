/*
Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
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

    int osum=0;
    int esum=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            esum+=arr[i];
        }
        else{
            osum+=arr[i];
        }
    }
    cout<<"The Required Difference Is :- "<<(esum-osum);

return 0;
}