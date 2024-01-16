/*
Write a function to count the number of digits in a number and then print the square of this number
*/
#include <iostream>
using namespace std;

int digit(int n){
    int count=0;
    int s=n;
    while(s>0){
        s=s/10;
        count++;
    }
    return count;
}
int sq(int n){
    return n*n;
}

int main(){

    int n;
    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    cout<<"Number Of Digits In "<<n<<" Are :- "<<digit(n)<<endl;
    cout<<"Square Of "<<n<<" Is :- "<<sq(n);
    
return 0;
}