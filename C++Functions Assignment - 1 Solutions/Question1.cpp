/*
 Write a function to print squares of first n natural numbers, taking n as argument to the function
*/
#include <iostream>
using namespace std;

int sq(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" :- "<<i*i<<endl;
    }
}

int main(){

    int n;
    cout<<"Kindly Enter The Number :- ";
    cin>>n;
    sq(n);

return 0;
}