//WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;

int main(){

    int radius,height;
    cout<<"Kindly Enter The Radius Of The Cylinder :- ";
    cin>>radius;

    cout<<"Kindly Enter The Height Of The Cylinder :- ";
    cin>>height;

    float pi=3.14;

    cout<<pi*radius*radius*height;

return 0;
}