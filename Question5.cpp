//Write a program to find the circumference of a circle with radius 10 in C++.

#include <iostream>
using namespace std;

int main(){

    int radius = 10;
    float pi = 3.14;

    float circumference;
    circumference = 2*(pi*radius);

    cout<<circumference;

return 0;
}