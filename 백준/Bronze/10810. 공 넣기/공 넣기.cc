#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> basket(n, 0);

    for (int t = 0; t < m; t++) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int idx = i - 1; idx <= j - 1; idx++) {
            basket[idx] = k;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << basket[i] << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}