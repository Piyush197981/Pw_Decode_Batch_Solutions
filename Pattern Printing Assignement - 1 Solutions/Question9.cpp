/*
Print the following pattern
Input : n = 4
Output :
   A
  AB
 ABC
ABCD
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

return 0;
}