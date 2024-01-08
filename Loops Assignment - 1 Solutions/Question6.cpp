/*Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.*/
#include <iostream>
using namespace std;

int main() {
    char FirstChar = 'A'; 

    while (FirstChar <= 'Z') {
    
        cout << "ASCII Value Of " << FirstChar << ": " << (int)FirstChar << endl;

        FirstChar++;
    }

    cout<<endl<<endl;

    char Char = 'a'; 

    while (Char <= 'z') {
    
        cout << "ASCII Value Of " << Char << ": " << (int)Char << endl;

        Char++;
    }

    return 0;
}
