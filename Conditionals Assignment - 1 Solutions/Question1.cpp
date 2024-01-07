/*Take 2 integers input and print the greatest of them*/
#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Kindly Enter The First Number :- ";
    cin>>a;

    cout<<"Kindly Enter The Second Number :- ";
    cin>>b;

    if(a>b){
        cout<<"First Number "<<a<<" Is The Largest";
    }
    else{
        cout<<"Second Number "<<b<<" Is The Largest";
    }

return 0;
}