/*
Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int s = -1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=1;k++){
            cout<<"*";
        }
        for(int l=1;l<=s;l++){
            cout<<" ";
        }
        s=s+2;
        if(i!=1){
            for(int m=1;m<=1;m++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int u=1;u<=1;u++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i-1)-3;k++){
            cout<<" ";
        }
        if(i!=n-2){
            for(int m=0;m<=0;m++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

return 0;
}