#include <bits/stdc++.h>
using namespace std;
long long solve(int n, long long r, long long c) {
    if (n == 0) return 0;
    long long half = 1LL << (n-1);
    long long q = (r/half)*2 + (c/half);
    return q * half * half + solve(n-1, r%half, c%half);
}
int main() {
    int n; long long r, c; cin >> n >> r >> c;
    cout << solve(n, r, c);
}