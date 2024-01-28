/*
Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP"
Input : str = "pw"
Output : "pwwp"
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

    string k;
    k=s;
    reverse(k.begin(),k.end());

    s=s+k;

    cout<<s;
return 0;
}