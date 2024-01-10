/*
Print the following pattern
Input: n = 4
Output:
ABCDEFG
ABC-EFG
AB---FG
A-----G
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int s=1;

    for(int i=1;i<=n;i++){
        char a = 'A';
        for(int j=1;j<=n-i+1;j++){
            cout<<a;
            a++;
        }
        if(i!=1){
            for(int k=1;k<=s;k++){
                cout<<"-";
                a++;
            }
            s=s+2;
        }
    if(i==1){
        for(int o=1;o<n;o++){
            cout<<a;
            a++;
        }
    }else{
        for(int l=1;l<=n-i+1;l++){
            cout<<a;
            a++;
        }
    }
    cout<<endl;
    }

return 0;
}