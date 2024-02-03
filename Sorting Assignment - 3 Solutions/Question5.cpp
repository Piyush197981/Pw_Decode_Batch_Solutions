/*
Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
array. If no such integer exists that satisfies the above condition then return -1.
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

float max(float a, float b){
    if(a>=b) return a;
    else return b;
}

float min(float a, float b){
    if(a<b) return a;
    else return b;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    float kmin = INT_MIN;
    float kmax = INT_MAX;
    bool flag = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            kmin = max(kmin, (float)(arr[i] + arr[i + 1]) / 2.0);
        } else {
            kmax = min(kmax, (float)(arr[i] + arr[i + 1]) / 2.0);
        }
        if (kmin > kmax) {
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << -1;
    } else if (kmin == kmax) {
        cout << "Value of K: " << kmin;
    } else {
        cout << "Range Of K Is: [" << (int)ceil(kmin) << ", " << (int)floor(kmax) << "]";
    }

    return 0;
}
