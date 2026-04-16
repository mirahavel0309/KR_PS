#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    for (int i = N/5; i >= 0; i--) {
        int rem = N - 5*i;
        if (rem % 3 == 0) { cout << i + rem/3; return 0; }
    }
    cout << -1;
}