/*
Given two numbers a and b, write a function to print all odd numbers between them.
*/
#include <iostream>
using namespace std;

int r(int a,int b){
    for(int i=a+1;i<b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}

int main(){

    int n,m;
    cout<<"Kindly Enter The First Number :- ";
    cin>>n;

    cout<<"Kindly Enter The Second Number :- ";
    cin>>m;

    r(n,m);

return 0;
}