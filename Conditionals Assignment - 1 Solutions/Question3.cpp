/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year
or not. (Considering leap year occurs after every 4 years)*/
#include <iostream>
using namespace std;

int main(){

    int year;

    cout<<"Kindly Enter The Year You Want To Check :- ";
    cin>>year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year.";
    } else {
        cout << year << " is not a leap year.";
    }

return 0;
}