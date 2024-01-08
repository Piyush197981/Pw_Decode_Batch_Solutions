/*WAP to print the sum of a given number and its reverse.*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int sum=n;
    int reverse=0;

    while(n>0){
        int k = n%10;
        reverse=reverse*10+k;
        n=n/10;
    }
    sum+=reverse;

    cout<<"Your Required Sum Is :- "<<sum<<endl;


return 0;
}