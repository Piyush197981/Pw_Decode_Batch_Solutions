/*WAP to print the sum of all the even digits of a given number*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int sum=0;

    while(n>0){
        int k = n%10;
        if(k%2==0){
            sum+=k;
        }
        n=n/10;
    }

    cout<<"Your Required Sum Is :- "<<sum<<endl;

return 0;
}