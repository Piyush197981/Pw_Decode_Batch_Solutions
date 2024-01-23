/*
Count the number of triplets whose sum is equal to the given value x
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

    int x;
    cout<<"Kindly Enter The Targated Sum :- ";
    cin>>x;

    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                }
            }
        }
    }
    cout<<"The Number Of Triplets Are :- "<<count;
    return 0;
}
