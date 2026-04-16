#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    for (int m = 1; m < N; m++) {
        int sum = m;
        for (int tmp = m; tmp; tmp /= 10) sum += tmp % 10;
        if (sum == N) { cout << m; return 0; }
    }
    cout << 0;
}