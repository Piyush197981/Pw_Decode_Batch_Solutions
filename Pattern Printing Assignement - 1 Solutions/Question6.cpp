/*Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
******
*    *
*    *
******
*/
#include <iostream>
using namespace std;

int main(){

    int n,m;

    cout<<"Kindly Enter The Number Of Rows :- ";
    cin>>m;

    cout<<"Kindly Enter The Number Of Columns :- ";
    cin>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==m-1 || j==0 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    

return 0;
}