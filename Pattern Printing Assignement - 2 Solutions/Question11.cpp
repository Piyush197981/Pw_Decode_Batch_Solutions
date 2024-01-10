/*
Print the following pattern
Input: n = 4
Output:
*******
***-***
**---**
*-----*
**---**
***-***
*******
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int s=1;
    int z=2;

    for(int i=0;i<n;i++){
        if(i==0){
            for(int l=0;l<2*n-1;l++){
                cout<<"*";
            }
            cout<<endl;
        }else{
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            for(int k=0;k<s;k++){
                cout<<" ";
            }
            for(int l=0;l<n-i;l++){
                cout<<"*";
            }
            s=s+2;
            cout<<endl;
        }
    }
    for(int i=0;i<n-2;i++){
            for(int j=0;j<z;j++){
                cout<<"*";
            }
            for(int k=0;k<2*(n-i-1)-3;k++){
                cout<<" ";
            }
            for(int j=0;j<z;j++){
                cout<<"*";
            }
            z++;
            cout<<endl;
    }
    for(int i=0;i<2*n-1;i++){
        cout<<"*";
    }

return 0;
}