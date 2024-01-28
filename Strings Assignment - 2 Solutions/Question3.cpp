/*
Input a string and return the number of substrings that contain only vowels.
Input : str = "abjkoe"
Output : 4
Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
Input : str = "hgdhpw"
Output : 0b
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
        int n = 0;
        if(s[i]=='i' || s[i]=='a' || s[i]=='o' || s[i]=='u' || s[i]=='e'){
            int c=1;
            for(int j=i+1;j<s.length();j++){
                if(s[j]=='i' || s[j]=='a' || s[j]=='o' || s[j]=='u' || s[j]=='e'){
                    c++;
                }
                else{
                    count+=(c*(c+1))/2;
                    break;
                }
            }
            if(c!=1){
                count+=(c*(c+1))/2;
            }
        }
    }
    cout<<count;

return 0;
}