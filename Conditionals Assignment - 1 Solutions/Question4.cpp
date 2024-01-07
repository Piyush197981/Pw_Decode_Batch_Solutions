/*Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter*/
#include <iostream>
using namespace std;

int main(){

    int lenght,breadth,area,perimeter;

    cout<<"Kindly Enter The Length :- ";
    cin>>lenght;

    cout<<"Kindly Enter The Breadth :- ";
    cin>>breadth;

    area = lenght*breadth;
    perimeter = 2*(lenght+breadth);

    if(area>perimeter){
        cout<<"Area Is Greater Than Perimeter.";
    }
    else if(perimeter>area){
        cout<<"Perimeter Is Greater Than Area.";
    }
    else{
        cout<<"Area And Perimeter Are Same.";
    }

return 0;
}