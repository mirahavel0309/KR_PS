#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << string(i, ' ')
             << string(2 * (n - i) - 1, '*') << '\n';
    }

    for (int i = n - 2; i >= 0; i--) {
        cout << string(i, ' ')
             << string(2 * (n - i) - 1, '*') << '\n';
    }
}