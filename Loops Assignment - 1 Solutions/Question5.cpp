/*Display this GP - 3,12,48,.. upto ‘n’ terms.*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    
    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int j = 3;

    for(int i=1;i<=n;i++){
        cout<<j<<endl;
        j = j*4;
    }


return 0;
}