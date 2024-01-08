/*Display this AP - 4,7,10,13,16.. upto ‘n’ terms.*/
#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout<<"Kindly Enter The Number :- ";
    cin>>n;

    int j = 4+(n-1)*3;

    for(int i=4;i<=j;i=i+3){
        cout<<i<<endl;
    }

return 0;
}