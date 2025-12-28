#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    long long result = 1LL * A * B * C;

    string s = to_string(result);

    int cnt[10] = {0};

    for (char c : s) {
        cnt[c - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << '\n';
    }

    return 0;
}