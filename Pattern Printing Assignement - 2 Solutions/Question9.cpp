/*
Print the following pattern
Sample Input : n = 5
Output :
-----*
----***
---*-*-*
--*--*--* 
-*---*---*
***********
-*---*---*
--*--*--*
---*-*-*
----***
-----*
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=0;k++){
            cout<<"*";
        }
        if(i>1){
            for(int u=0;u<i-1;u++){
                cout<<" ";
            }
        }
        if(i>0){
            for(int k=0;k<=0;k++){
                cout<<"*";
            }
        }
        if(i>1){
            for(int u=0;u<i-1;u++){
                cout<<" ";
            }
        }
        if(i>0){
            for(int k=0;k<=0;k++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<2*n+1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k=0;k<=0;k++){
            cout<<"*";
        }
        for(int u=0;u<n-i-2;u++){
            cout<<" ";
        }
        if(i!=n-1){
            for(int p=0;p<=0;p++){
                cout<<"*";
            }
        }
        for(int u=0;u<n-i-2;u++){
            cout<<" ";
        }
        if(i!=n-1){
            for(int p=0;p<=0;p++){
                cout<<"*";
            }
        }
        cout<<endl;
    }



return 0;
}