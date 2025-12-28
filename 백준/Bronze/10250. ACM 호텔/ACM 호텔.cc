#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int h, w, n;
        cin >> h >> w >> n;

        int y = (n - 1) % h + 1;
        int x = (n - 1) / h + 1;

        cout << y << (x < 10 ? "0" : "") << x << '\n';
    }
    return 0;
}
