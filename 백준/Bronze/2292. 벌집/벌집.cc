#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N; cin >> N;
    if (N == 1) { cout << 1; return 0; }
    long long cnt = 1, limit = 1, step = 1;
    while (limit < N) { limit += 6 * step++; cnt++; }
    cout << cnt;
}