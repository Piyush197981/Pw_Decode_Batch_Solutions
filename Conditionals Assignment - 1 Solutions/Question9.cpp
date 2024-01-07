/*Write a C++ program to input any character and check whether it is the alphabet, digit or special
character.*/
#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Kindly Enter The Character You Want To Check :- ";
    cin >> character;

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        cout << "alphabet.";
    } else if (character >= '0' && character <= '9') {
        cout << "digit.";
    } else {
        cout << "special character.";
    }

    return 0;
}
