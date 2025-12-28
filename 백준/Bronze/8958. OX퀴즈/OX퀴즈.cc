#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int cnt = 0;
        int score = 0;

        for (char c : s) {
            if (c == 'O') {
                cnt++;
                score += cnt;
            } else {
                cnt = 0;
            }
        }

        cout << score << '\n';
    }

    return 0;
}
