#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter The Number Of Elements :- ";
    cin>>n;

    int m=INT_MIN;
    int s=INT_MIN;

    int arr[n];

    cout<<"Kindly Enter The Elements :- ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(m<arr[i]){
            s=m;
            m=arr[i];
        }
    }
    cout<<"The Second Largest Element Is :- "<<s;

return 0;
}