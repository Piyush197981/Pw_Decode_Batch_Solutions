/*
Print the following pattern
Input : n = 4
Output :
*-----*
**---**
***-***
*******
*******
***-***
**---**
*-----*
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i-1)-1;k++){
            cout<<"-";
        }
        if(i!=n-1){
            for(int l=0;l<=i;l++){
                cout<<"*";
            }
        }else{
            for(int l=0;l<i;l++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    int s=1;

    for(int i=0;i<n-1;i++){
        if(i==0){
            for(int u=0;u<2*n-1;u++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int k=0;k<s;k++){
            cout<<"-";
        }
        for(int l=0;l<n-i-1;l++){
            cout<<"*";
        }
        s=s+2;
        cout<<endl;
    }

return 0;
}