/*
Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna
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

    int n=s.length();

    reverse(s.begin()+n/2,s.end());

    cout<<s;

return 0;
}