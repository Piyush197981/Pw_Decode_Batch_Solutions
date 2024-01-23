/*
Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
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
        bool flag=true;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<"Unique Element Is :- "<<arr[i];
            break;
        }
    }

return 0;
}