/*Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.*/
#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Kindly Enter The First Side :- ";
    cin>>a;

    cout<<"Kindly Enter The Second Side :- ";
    cin>>b;

    cout<<"Kindly Enter The Third Side :- ";
    cin>>c;

    if(a==b && b==c){
        cout<<"This Is An Equilatteral Triangle.";
    }
    else if(a==b || b==c || a==c){
        cout<<"This Is An Isosceles Triangle.";
    }
    else{
        cout<<"This Is An Scalene Triangle.";
    }

return 0;
}