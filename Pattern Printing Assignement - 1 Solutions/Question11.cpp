/*
Print the following pattern
Input: n = 4
Output:
   *
  **
 ***
****
 ***
  **
   *
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}