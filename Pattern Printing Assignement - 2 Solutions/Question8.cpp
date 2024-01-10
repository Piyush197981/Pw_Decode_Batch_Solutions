/*
Print the following pattern
Sample Input : n = 4
Output :
---1
--2-2
-3---3
4-----4
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    int s=-1;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=1;k++){
            cout<<i;
        }
        for(int l=1;l<=s;l++){
            cout<<" ";
        }
        s=s+2;
        if(i!=1){
            for(int m=1;m<=1;m++){
                cout<<i;
            }
        }
        cout<<endl;
    }

return 0;
}