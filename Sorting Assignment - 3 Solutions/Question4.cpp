/*
Find the minimum operations required to sort the array in increasing order. In one operation ,
you can set each occurrence of one element to 0.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    
    int n;
    cout<<"Kindly Enter The Number Of Elements :- ";
    cin>>n;
    
    int arr[n];
    cout<<"Kindly Enter The Elements :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    cout<<"Minimum Opeartions/Swaps Needed To Sort :- "<<count;

    return 0;
}