/*
Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.
Input : str = "Pbwcshkuiglhlds"
Output : "P#w#s#k#i#l#l#s"
input : str = "a"
Output : "a"
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

    for(int i=0;i<s.length();i++){
        if(i%2!=0){
            s[i]='#';
        }
    }
    cout<<s<<endl;

return 0;
}