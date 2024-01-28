/*
Input a string of length n and count all the consonants in the given string.
Input : "pwians"
Output : 4
Input : "abdc"
Output : 3
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
    cout<<"Kindly Enter The String :- ";
    getline(cin,s);

    int count=0;

    for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='e' && s[i]!='A' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='E'){
            count++;
        }
    }
    cout<<count;

return 0;
}