/*
Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes
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

    string b;
    b=s;
    reverse(b.begin(),b.end());

    if(s==b){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

return 0;
}