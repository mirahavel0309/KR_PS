#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    int mn = x, mx = x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }

    cout << mn << ' ' << mx;
}
