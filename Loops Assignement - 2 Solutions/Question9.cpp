/*Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )*/
#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500 :- "<<endl;

    for (int n = 1; n <= 500; n++) {
        int originalNum = n;
        int sum = 0;

        while (originalNum > 0) {
            int k = originalNum % 10;
            sum += k * k * k;
            originalNum /= 10;
        }

        if (sum == n) {
            cout << n << endl;
        }
    }

    cout << endl;

    return 0;
}

