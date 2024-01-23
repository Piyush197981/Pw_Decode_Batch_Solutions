/*
Find the factorial of a large number.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Kindly Enter The Number :- ";
    cin >> n;
    vector<int> res;
    res.push_back(1);

    for (int x = 2; x <= n; x++) {
        int car = 0;

        for (int i = res.size() - 1; i >= 0; i--) {
            int val = res[i] * x + car;
            res[i] = val % 10;
            car = val / 10;
        }

        while (car != 0) {
            res.insert(res.begin(), car % 10);
            car /= 10;
        }
    }

    cout<<"The Factorial Of "<<n<<" Is :- ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
    }

    return 0;
}
