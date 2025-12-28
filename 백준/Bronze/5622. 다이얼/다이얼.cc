#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> g = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

    string s;
    cin >> s;

    int ans = 0;

    for (char c : s) {
        for (int i = 0; i < 8; i++) {
            if (g[i].find(c) != string::npos) {
                ans += i + 3;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}