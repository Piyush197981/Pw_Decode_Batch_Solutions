/*Print the factorials of first ‘n’ numbers*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int f = 1;
        for(int j=1;j<=i;j++){
            f*=j;
        }
        cout<<f<<endl;
    }

return 0;
}