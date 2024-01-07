/*Given the radius of the circle, predict whether numerically the area of this circle is larger than the
circumference or not.*/
#include <iostream>
using namespace std;

int main(){

    float radius;
    float pi=3.14;

    float area,perimeter;

    cout<<"Kindly Enter The Radius :- ";
    cin>>radius;

    area = pi*radius*radius;
    perimeter = 2*pi*radius;

    if(area>perimeter){
        cout<<"Area Is Greater Than Circumference.";
    }
    else if(perimeter>area){
        cout<<"Circumference Is Greater Than Area.";
    }
    else{
        cout<<"Area And Circumference Are Same.";
    }

return 0;
}