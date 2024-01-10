/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int s=1;

    for(int i=1;i<=n;i++){
        int a = 0;
        for(int j=1;j<=n-i+1;j++){
            a++;
            cout<<a;
        }
        if(i!=1){
            for(int k=1;k<=s;k++){
                cout<<"-";
            }
            s=s+2;
        }
    if(i==1){
        for(int o=1;o<n;o++){
            cout<<a-1;
            a--;
        }
    }else{
        for(int l=1;l<=n-i+1;l++){
            cout<<a;
            a--;
        }
    }
    cout<<endl;
    }

return 0;
}