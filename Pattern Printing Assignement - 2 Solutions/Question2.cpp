/*
Print the following pattern
Input: n = 4
Output:
   A
  ABC
 ABCDE
ABCDEFG
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char p = 'A';
        for(int k=1;k<=i;k++){
            cout<<p;
            p++;
        }
        char s = 'A'+i;
        for(int l=1;l<=i-1;l++){
            cout<<s;
            s++;
        }
        cout<<endl;
    }

return 0;
}