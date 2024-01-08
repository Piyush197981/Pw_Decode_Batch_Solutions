/*Write a program to count the minimum number of notes in a given amount using the switch statement.*/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){

    int amount;

    cout<<"Please Enter The Amount :- ";
    cin>>amount;

    int n1,n2,n5,n10,n20,n50,n100,n200,n500;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=0;

    switch(amount>=500){
        case 1:
        n500+=amount/500;
        amount-=n500*500;
        break;
    }
    switch(amount>=200){
        case 1:
        n500+=amount/200;
        amount-=n200*200;
        break;
    }
    switch(amount>=100){
        case 1:
        n500+=amount/100;
        amount-=n100*100;
        break;
    }
    switch(amount>=50){
        case 1:
        n500+=amount/50;
        amount-=n50*50;
        break;
    }
    switch(amount>=20){
        case 1:
        n500+=amount/20;
        amount-=n20*20;
        break;
    }
    switch(amount>=10){
        case 1:
        n500+=amount/10;
        amount-=n10*10;
        break;
    }
    switch(amount>=5){
        case 1:
        n500+=amount/5;
        amount-=n5*5;
        break;
    }
    switch(amount>=2){
        case 1:
        n500+=amount/2;
        amount-=n2*2;
        break;
    }
    switch(amount>=1){
        case 1:
        n500+=amount/1;
        amount-=n1*1;
        break;
    }

    cout<<"Notes Of 500 Are :- "<<n500<<endl;
    cout<<"Notes Of 200 Are :- "<<n200<<endl;
    cout<<"Notes Of 100 Are :- "<<n100<<endl;
    cout<<"Notes Of 50 Are :- "<<n50<<endl;
    cout<<"Notes Of 20 Are :- "<<n20<<endl;
    cout<<"Notes Of 10 Are :- "<<n10<<endl;
    cout<<"Notes Of 5 Are :- "<<n5<<endl;
    cout<<"Notes Of 2 Are :- "<<n2<<endl;
    cout<<"Notes Of 1 Are :- "<<n1<<endl;

return 0;
}