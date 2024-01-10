/*
Print the following pattern
Input : n = 5
Output:
*-------*
-*-----*
--*---*
---*-*
----*
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int u=1;u<=1;u++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i-1)-1;k++){
            cout<<" ";
        }
        if(i!=n-1){
            for(int m=0;m<=0;m++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    

return 0;
}