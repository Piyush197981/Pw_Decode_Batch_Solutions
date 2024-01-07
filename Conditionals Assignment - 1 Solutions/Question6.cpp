/* If the marks of A, B and C are input through the keyboard, write a program to determine the student
scoring the least marks.*/
#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Kindly Enter The Marks Of First Student :- ";
    cin>>a;

    cout<<"Kindly Enter The Marks Of Second Student :- ";
    cin>>b;

    cout<<"Kindly Enter The Marks Of Third Student :- ";
    cin>>c;

    if(a<b && a<c){
        cout<<"Student A Has Least Marks.";
    }
    else if(b<a && b<c){
        cout<<"Student B Has Least Marks.";
    }
    else{
        cout<<"Student C Has Least Marks.";
    }

return 0;
}