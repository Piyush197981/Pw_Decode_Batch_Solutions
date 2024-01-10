/*
Print the following pattern
Input: n = 5
Output:
    1
   123
  12345
 1234567
123456789
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
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        int s = i+1;
        for(int l=1;l<=i-1;l++){
            cout<<s;
            s++;
        }
        cout<<endl;
    }

return 0;
}