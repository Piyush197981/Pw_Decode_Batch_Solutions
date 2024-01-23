/*
Find the first non-repeating element in the array .
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Kindly Enter The Number :- ";
    cin >> n;
    int arr[n];
    cout<<"Kindly Enter The Elements :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=false;
            }
        }
        if(flag==true){
            cout<<"The First Non-Repeating Number Is :- "<<arr[i];
            break;
        }
    }
    return 0;
}
