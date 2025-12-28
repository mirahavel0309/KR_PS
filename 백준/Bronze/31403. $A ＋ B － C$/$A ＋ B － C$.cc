#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b - c << '\n';

    string sa = to_string(a);
    string sb = to_string(b);
    string sc = to_string(c);

    cout << stoi(sa + sb) - stoi(sc);
    return 0;
}