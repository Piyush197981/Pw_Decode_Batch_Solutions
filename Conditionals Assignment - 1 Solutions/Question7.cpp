/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).*/
#include <iostream>
using namespace std;

int main(){

    int x,y;

    cout<<"Kindly Enter The X Coordinate :- ";
    cin>>x;

    cout<<"Kindly Enter The Y Coordinate :- ";
    cin>>y;

    if(x>0 && y==0){
        cout<<"This Point Lies On The X Axis.";
    }
    else if(y>0 && x==0){
        cout<<"This Point Lies On The Y Axis.";
    }
    else if (y==0 && x==0){
        cout<<"This Point Lies On The Origin.";
    }
    else{
        cout<<"This Point Lies Both On The X Axis As Well As Y Axis.";
    }

return 0;
}