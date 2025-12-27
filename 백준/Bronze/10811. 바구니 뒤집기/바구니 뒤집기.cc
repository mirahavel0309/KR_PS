#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) v[i] = i + 1;

    for (int t = 0; t < m; t++) {
        int i, j;
        cin >> i >> j;
        reverse(v.begin() + (i - 1), v.begin() + j);
   }

    for(int i = 0; i < n; i++) {
        cout << v[i] << ' ';
   }

    return 0;
}