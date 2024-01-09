/*Print the following pattern
Input: n = 4
Output:
1
A B
1 2 3
A B C D*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Kindly Enter The Number :- ";
    cin>>n;
    
    for(int i = 1; i <= n; ++i) {
        if (i % 2 == 1) { 
            for (int j = 1; j <= i; ++j) {
                    cout << j;
            }
        } else { 
            char ch = 'A';
            for (int j = 1; j <= i; ++j) {
                cout << ch;
                ch++;
            }
        }
        cout << endl;
    }


return 0;
}