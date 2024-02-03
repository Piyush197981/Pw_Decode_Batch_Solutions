/*
Check if the given array is almost sorted. (elements are at-most one position away)
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    sort(b, b + n);

    bool flag = true;

    if (a[0] != b[0] && a[0] != b[1]) {
        cout << "Array Is Not Almost Sorted.";
        flag = false;
    }
    else if (a[n - 1] != b[n - 1] && a[n - 1] != b[n - 2]) {
        cout << "Array Is Not Almost Sorted.";
        flag = false;
    }
    else {
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] != b[i] && a[i] != b[i - 1] && a[i] != b[i + 1]) {
                cout << "Array Is Not Almost Sorted.";
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        cout << "Array Is Almost Sorted.";
    }

    return 0;
}
