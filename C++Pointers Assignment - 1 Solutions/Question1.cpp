/*
 Write a program to find the product of two numbers using pointers
*/
#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Kindly Enter The First Number :- ";
    cin>>a;

    cout<<"Kindly Enter The Second Number :- ";
    cin>>b;

    int* p1;
    int* p2;
    p1=&a;
    p2=&b;

    cout<<((*p1)*(*p2));

return 0;
}