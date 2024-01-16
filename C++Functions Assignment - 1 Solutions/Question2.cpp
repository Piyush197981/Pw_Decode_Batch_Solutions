/*
Write a function that takes the radius of a circle as an argument and returns its area.
*/
#include <iostream>
#include <cmath>
using namespace std;

float ar(int n){
    float pi=3.14;
    return (pi*n*n);
}

int main(){

    int n;
    cout<<"Kindly Enter The Radius Of Circle :- ";
    cin>>n;

    cout<<"Area Of Circle Is :- "<<ar(n);


return 0;
}