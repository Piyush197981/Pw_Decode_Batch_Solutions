/*
Given a sentence ‘str’, return the word that is lexicographically maximum.
Input : str = "proud to be pwians"
Output : to
Input : str = "decode dsa with pw"
Output : with
*/
#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <climits>
#include <string>
#include <string.h>
#include <sstream>
using namespace std;

int main(){

    string s;
    cout << "Kindly Enter The String :- ";
    getline(cin, s);

    stringstream ss(s);
    string word, maxWord="a";

    while (ss >> word) {
        if (word > maxWord) {
            maxWord = word;
        }
    }

    cout << "Lexicographically Maximum Word :- " << maxWord << endl;

    return 0;
}