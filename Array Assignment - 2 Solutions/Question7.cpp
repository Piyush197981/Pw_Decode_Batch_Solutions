/*
If an array arr contains n elements, then check if the given array is a palindrome or not .
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Kindly Enter The Number Of Elements: ";
    cin >> n;

    int arr[n];
    cout << "Kindly Enter The Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Palindrome Array";
    } else {
        cout << "Not a Palindrome Array";
    }

    return 0;
}
