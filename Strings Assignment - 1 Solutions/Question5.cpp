/*
Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12
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

    int b = 0;
    
    //51-3 48
    for(int i=0;i<s.length();i++){
        b=b*10+(int)s[i]-48;
    }
    cout<<b;
return 0;
}