#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n for the Fibonacci sequence: ";
    cin >> n;

    int first = 1, second = 1;

    for (int i = 0; i < n; i++) {
        cout << first << endl;

        int next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
