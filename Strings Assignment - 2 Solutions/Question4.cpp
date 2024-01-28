/*
Given an array of strings. Check whether they are anagram or not.
Input : s = "car" , t = "arc"
Output : True
Input : s = "book" , t = "hook"
Output : False
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

    string s,t;
    cout<<"Kindly Enter The 1st String :- ";
    getline(cin,s);

    cout<<"Kindly Enter The 2nd String :- ";
    getline(cin,t);

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<"true";
    else cout<<"false";

return 0;
}